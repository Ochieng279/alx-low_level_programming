#include "main.h"
/**
 *_strchr - function to locate a character in a string
 *@s: string to be searched
 *@c: character to be located
 *Return: always 0
 *
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);

	}
	return (0);
}
