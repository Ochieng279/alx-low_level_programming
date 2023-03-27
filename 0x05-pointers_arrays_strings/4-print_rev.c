#include "main.h"
/**
 *print_rev - function to print reverse of a string
 *
 *@s: string to be printed
 *
 *Return: always 0
 */
void print_rev(char *s)
{
	int x = 0;
	int y;

	while (*s != '\0')
	{
		x++;
		s++;
	}

	s--;
	for (y = x; y > 0; y--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');



}
