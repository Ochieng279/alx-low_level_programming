#include "main.h"

/**
 *print_sign - function to print the signs
 *
 * @n: parameter to be checked
 *
 *Return: always 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);

	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);

	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);


	}


}
