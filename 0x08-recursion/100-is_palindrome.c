#include "main.h"

int check_palindrome(char *s, int  x, int length);
int _strlen_recursion(char *s);
/**
 *is_palindrome - function that checks if a string is  palindrome or not
 *@s: string to be checked
 *Return: 1 ifs is palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s)));


}

/**
 *_strlen_recursion - function that returns the length of a string
 *@s: string to be checked
 *Return: the length of the string
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));

}
/**
 *check_palindrome - checks all the characters recursively for palindrome
 *@s: string to be checked
 *@x: iterator
 *@length: length of the string s
 *Return: 1 if palindrome and 0 if not
 */
int check_palindrome(char *s, int  x, int length)
{
	if (*(s + x) != *(s + length - 1))
		return (0);
	if (x >= length)
		return (1);
	return (check_palindrome(s, x + 1, length - 1));

}

