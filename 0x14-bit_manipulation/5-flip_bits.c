#include "main.h"
/**
 * flip_bits - function that counts the number of bits to flip/ 
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	int count_digits = 0;
	unsigned long int curr_position;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr_position = exclusive >> i;
		if (curr_position & 1)
			count_digits++;
	}

	return (count_digits);
}
