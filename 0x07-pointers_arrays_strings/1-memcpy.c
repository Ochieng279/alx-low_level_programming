#include "main.h"
/**
 *_memcpy - function that copies the src memory area to dest memory area
 *@dest: destination memory area
 *@src: source memory area
 *@n: number of bytes of the memory to be copied
 *Return: always 0
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];

	return (dest);


}
