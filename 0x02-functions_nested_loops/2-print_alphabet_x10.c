#include "main.h"

/**
 * print_alphabet_x10 - function to print the alphabet 10 times
 *
 * @void: parameter to be checked
 *
 * Return: always 0
 *
 */

void print_alphabet_x10(void)
{
	char i;
	char j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}


}
