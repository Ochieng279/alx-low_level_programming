#include "main.h"
/**
 * print_numbers - function to print numbers 0 - 9
 *
 *@void: parameter value
 *
 *Return: always 0
 */

void print_numbers(void)
{
	int x;

	for  (x = 0; x <= 9; x++)
		_putchar(x + '0');

	_putchar('\n');


}
