#include "main.h"
/**
 *reverse_array - function to reverse array elements
 *@a: the array to be reversed
 *@n: the number of elements to be reversed in the array
 *Return: always 0
 *
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;

	}

}
