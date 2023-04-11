#include "main.h"
#include <stdlib.h>
/**
 *create_array - fuction to create an array of size size
 *@size: the size of the array
 *@c: char to be assigned to the array
 *Return: NULL if it fails and 0 if it is success
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int x;

	str = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (str == 0)
		return (NULL);

	for (x = 0; x < size; x++)

		str[x] = c;

	return (str);

}
