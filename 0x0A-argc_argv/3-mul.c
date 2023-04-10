#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - this is the main function
 *@argc: number of array elements
 *@argv: array of elements argc
 *Return: always 0
 *
 */
int main(int argc, char *argv[])
{
	int x = 0;
	int y = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
	}

	return (0);

}
