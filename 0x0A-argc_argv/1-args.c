#include "main.h"
#include <stdio.h>
/**
 *main - main function
 *@argc: array elements
 *@argv: array of argc elements
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);


}
