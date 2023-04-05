#include "main.h"

int prime_number(int x, int y);
/**
 *is_prime_number - function to check if a number is prime or not
 *@n: number to be checked
 *Return: 1 if n is prime and 0 if not
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));

}
/**
 *prime_number - function to calculate the prime number of a value
 *@x: number to get the square root of
 *@y: iterator
 *Return: always 0
 */
int prime_number(int x, int y)
{
	if (y == 1)
		return (1);
	else if (x % y == 0 && y > 0)
		return (0);
	else
		return (prime_number(x, y - 1));

}
