#include "main.h"
/**
 **rot13 - function to encode string in rot13
 *@s: string to be encoded
 *Return: s
 *
 */
char *rot13(char *s)
{
	int i;
	int j;

	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char srot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == s1[j])
			{
				s[i] = srot[j];
				break;

			}

		}

	}
	return (s);


}
