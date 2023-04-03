#include "main.h"
/**
 *_strpbrk - function that searches a string for any of a set of bytes
 *@s: string to be scanned
 *@accept: strings containing strings to be matched
 *Return: always 0
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);

		}
		s++;

	}
	return ('\0');

}
