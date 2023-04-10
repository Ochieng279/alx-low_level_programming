#include "main.h"
#include <stdio.h>
/**
 *main - this is the main fuction
 *@argc: number of elements in the array
 *@argv: the array of elements argc
 *Return: always 0
 *
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);
	return (0);

}

