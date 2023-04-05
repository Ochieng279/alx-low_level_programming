#include "main.h"

int actual_sqrt(int n, int x);
/**
 *_sqrt_recursion - function  that returns the natural square root of a number
 *@n: number to get the square root of
 *Return: always 0
 *
 */
int _sqrt_recursion(int n)
{
	return (actual_sqrt(n, 1));
}

/**
 *actual_sqrt - function to calculate the square root
 *@n: number to be calculated
 *@x: the power value
 *Return: always 0
 */

int actual_sqrt(int n, int x)
{
	int sqrt = x * x;

	if (sqrt > n)
		return (-1);

	else if (sqrt == n)
		return (x);

	else
		return (actual_sqrt(n, x + 1));


}
