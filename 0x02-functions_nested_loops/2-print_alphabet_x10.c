#include "main.h"

/**
 * main - this is the main function
 *
 * print_alphabet_x10: prints the alphabet 10 times
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
