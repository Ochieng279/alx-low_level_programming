#include "function_pointers.h"
#include <stdio.h>
/**
 *void print_name - function that prints a name using a pointer
 *@name: string to add
 *@f: pointer to the function
 *Return: always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
