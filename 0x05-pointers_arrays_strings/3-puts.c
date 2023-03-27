#include "main.h"
/**
 *_puts - function to print a string followed by a new line
 *
 *@str: parameter to be printed
 *
 *Return: always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);

	_putchar('\n');


}
