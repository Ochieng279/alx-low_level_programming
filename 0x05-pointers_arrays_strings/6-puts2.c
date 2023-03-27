#include "main.h"
/**
 *puts2 - function to print a character starting with the first character
 *
 *@str: parameter to be printed
 *
 *Return: always 0
 */
void puts2(char *str)
{
	int x = 0;
	int y = 0;
	char *z = str;
	int i;

	while (*z != '\0')
	{
		z++;
		x++;
	}
	y = x - 1;

	for (i = 0; i <= y; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);

	}
	_putchar('\n');
}
