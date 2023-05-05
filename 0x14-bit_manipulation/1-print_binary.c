#include "main.h"
/**
 * print_binary - function that prints the binary representation/
 *  of a decimal number
 * @n: number to print in binary
 * Return: always 0
 */
void print_binary(unsigned long int n)
{
	int i;
	int count_digits = 0;
	unsigned long int curr_number;

	for (i = 63; i >= 0; i--)
	{
		curr_number = n >> i;

		if (curr_number & 1)
		{
			_putchar('1');
			count_digits++;
		}
		else if (count_digits)
			_putchar('0');
	}

	if (!count_digits)
		_putchar('0');
}
