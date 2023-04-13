#include "main.h"
#include <stdlib.h>
/**
 *_setmem - function that fills memory with a constant byte
 *@s: memory address to be filled
 *@c: bytes to be copied
 *@n: number of times to be copy
 *Return: pointer to the filled memory
 */
char *_setmem(char *s, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = c;
	}
	return (s);
}

/**
 *_calloc - function that allocates memory for an array
 *@nmemb: array elements
 *@size: size of the array
 *Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_setmem(ptr, 0, nmemb * size);

	return (ptr);
}
