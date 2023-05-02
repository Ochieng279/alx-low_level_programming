#include <stdio.h>
#include "lists.h"
/**
 *print_listint - function to print all elements of listint_t list
 *@h: pointer to listint_t to print
 *Return: the number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}
	return (x);
}
