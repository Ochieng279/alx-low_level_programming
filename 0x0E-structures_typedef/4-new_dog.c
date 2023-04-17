#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *c);
char *_strcpy(char *dest, char *src);
/**
 *new_dog - function that creates a new gog
 *@name: name of the new dog
 *@age: age of the new dog
 *@owner: owner of the new dog
 *Return: always 0
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1;
	int len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);

}

/**
 * _strlen - function that returns the length of a string
 * @s: string to check
 * Return: the length of the string
 */
int _strlen(char *c)
{
	int i;

	i = 0;

	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 *_strcpy - function that copies a string from src to dest
 * including the terminating null byte (\0)
 * @dest: destination  string
 * @src: source string
 * Return: destination string
 */
char *_strcpy(char *dest, char *src)
{
	int len;
	int i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
