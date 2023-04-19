#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that prints each array element on a newline
 * @array: array of type int
 * @size: number of elements in the array
 * @action: pointer to print either ordinary or hex numbers
 * Return: nothing. always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
