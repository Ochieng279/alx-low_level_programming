#include "main.h"
/**
 *rev_string - function to reverse a string
 *
 *@s: string to be reversed
 *
 *Return: always 0
 *
 */
void rev_string(char *s)
{
	char x = s[0];
	int index = 0;
	int i;

	while (s[index] != '\0')
		index++;

	for (i = 0; i < index; i++)
	{
		index--;
		x = s[i];
		s[i] = s[index];
		s[index] = x;

	}
}
