#include "main.h"
/**
 *swap_int - function to swap two integers
 *
 *@a: 1st inrteger to be swapped
 *
 *@b: 2nd integer to be swapped
 *
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;


}
