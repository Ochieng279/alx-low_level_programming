#include "main.h"
#include <stdio.h>
/**
 *print_array - function to print array elements
 *
 *@a: array
 *
 * @n: parameter to be printed
 *
 * Return: always 0
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);

		if (x != (n - 1))
			printf(", ");

	}
	printf("\n");




}
