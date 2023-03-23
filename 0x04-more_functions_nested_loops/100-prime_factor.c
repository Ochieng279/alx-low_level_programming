#include <stdio.h>
#include <math.h>
/**
 *main -  main function
 *
 *@void: parameter to be checked
 *
 *Return: always 0
 *
 */

int main(void)
{
	long x, maxk;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
			maxk = number / x;

	}
	printf("%ld\n", maxk);
	return (0);


}
