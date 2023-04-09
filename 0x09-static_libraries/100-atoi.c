#include "main.h"
/**
 *_atoi - function to convert a string to an integer
 *
 *@s: parameter to be converted
 *
 *Return: always 0
 */
int _atoi(char *s)
{
	int x = 0;
	int y = 1;
	int z = 0;
	unsigned int i = 0;

	while (s[x])
	{
		if (s[x] == 45)
			y *= -1;

		while (s[x] >= 48 && s[x] <= 57)
		{
			z = 1;
			i = (i * 10) + (s[x] - '0');
			x++;

		}

		if (z == 1)
			break;

		x++;


	}
	i *= y;
	return (i);


}
