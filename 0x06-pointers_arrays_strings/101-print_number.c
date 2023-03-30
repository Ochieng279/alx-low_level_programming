#include "main.h"
/**
 *print_number - function to print an integer
 *@n: integer to be printed
 *Return: always 0
 *
 */
void print_number(int n)
{
	unsigned int i;

	i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -n;

	}

	if (i / 10 != 0)
		print_number(i / 10);

	_putchar((i % 10) + '0');


}
