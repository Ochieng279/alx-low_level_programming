#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - function that calculates the sum of all the params
 *@n: the number of parameters
 *Return: the sum of the params
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int i;
	unsigned int sum = 0;

	va_start(x, n);

	for (i = 0; i < n; i++)
		sum += va_arg(x, int);

	va_end(x);

	return (sum);
}
