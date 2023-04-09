#include "main.h"
/**
 *_strncpy - function to copy string
 *@dest: destination string
 *@src: source string
 *@n: number of strings
 *Return: destination string
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;
	int srclen = 0;

	while (src[x++])
		srclen++;

	for (x = 0; src[x] && x < n; x++)
		dest[x] = src[x];

	for (x = srclen; x < n; x++)
		dest[x] = '\0';

	return (dest);


}
