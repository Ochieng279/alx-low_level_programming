#include "main.h"
#include <stdlib.h>
/**
 *str_concat - function that concatenates two strings
 *@s1: string 1 to be concatenated
 *@s2: string 2 to be concatenated
 *Return: the concatenated string
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = 0;
	j = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	str = malloc(sizeof(char) * (i + j + 1));

	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;

	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}

	str[i] = '\0';
	return (str);
}
