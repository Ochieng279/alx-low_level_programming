#include "main.h"
/**
 *_strlen - function to print the length of a string
 *
 *@s: parameter string
 *
 *Return: always 0
 */
int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++;

	}
	return (x);

}
