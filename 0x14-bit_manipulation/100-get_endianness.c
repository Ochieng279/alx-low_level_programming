#include "main.h"
/**
 * get_endianness - function that checks if a machine is little or big endian
 * Return: 0 if  big, 1 if little
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}

