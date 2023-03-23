#include "main.h"
/**
 *print_most_numbers - function to print numbers
 *
 *@void: parameter value
 *
 *Return: always 0
 *
 */

void print_most_numbers(void)
{
	int x = 0;

	for (x = 0; x <= 9; x++)
	{
		if (x == 2 || x == 4)
			continue;
		else
			_putchar(x + '0');
	}
	_putchar('\n');


}
