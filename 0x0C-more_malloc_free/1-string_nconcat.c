#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - function that concatenates one string to another
 *@s1: string to append to
 *@s2: string to concatenate from
 *@n: number of bytes to concatenate s2 to s1
 *Return: pointer to the concatenated string
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int x = 0;
	unsigned int y = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		c = malloc(sizeof(char) * (len1 + n + 1));
	else
		c = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!c)
		return (NULL);

	while (x < len1)
	{
		c[x] = s1[x];
		x++;
	}

	while (n < len2 && x < (len1 + n))
		c[x++] = s2[y++];

	while (n >= len2 && x < (len1 + len2))
		c[x++] = s2[y++];

	c[x] = '\0';

	return (c);
}
