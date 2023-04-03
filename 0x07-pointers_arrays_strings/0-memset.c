#include "main.h"
/**
 *_memset - function that fills memory with a constant byte
 *@s: pointer to the block of memory to fill
 *@b: the constant byte
 *@n: number of bytes
 *Return: always 0
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);

}
