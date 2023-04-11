#include "main.h"
#include <stdlib.h>
/**
 *_strdup - function that returns a pointer to a duplicated memory location
 *@str: string to be checked
 *Return: always 0
 *
 */
char *_strdup(char *str)
{
	char *c;
	int x;
	int y = 0;

	if (str == NULL)
		return (NULL);

	x = 0;

	while (str[x] != '\0')
		x++;

	c = malloc(sizeof(char) * (x + 1));

	if (c == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		c[y] = str[y];
	return (c);

}

