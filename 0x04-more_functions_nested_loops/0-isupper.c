#include "main.h"
/**
 *_isupper - function to check for uppercase
 *
 * @c: parameter to be checked
 *
 *Return: always 0
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);

}
