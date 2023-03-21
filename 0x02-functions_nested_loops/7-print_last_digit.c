#include "main.h"

/**
 *print_last_digit - function to print the last digit
 *
 *@x: parameter to be checked
 *
 *Return: always 0
 */

int print_last_digit(int x)
{
	int y;

	y = x % 10;

	if (x < 0)
		y = -y;
	_putchar(y + '0');
	return (y);


}
