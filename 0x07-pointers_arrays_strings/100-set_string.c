#include "main.h"
/**
 *set_string - function that sets the value of a pointer to char
 *@s: pointer to a pointer to
 *@to: pointer to char
 *Return: always 0
 *
 */
void set_string(char **s, char *to)
{
	*s = to;

}
