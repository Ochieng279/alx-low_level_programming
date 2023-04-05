#include "main.h"
/**
 *_strlen_recursion - function that returns the length of a string
 *@s: string to be checked
 *Return: the string
 *
 */
int _strlen_recursion(char *s)
{
	int strlength = 0;

	if (*s)
	{
		strlength++;
		strlength += _strlen_recursion(s + 1);
	}

	return (strlength);

}
