#include "lists.h"
/**
 * sum_listint - function that calculates the sum of all the/
 * data in a listint_t list
 * @head: first node in the linked list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *x = head;

	while (x)
	{
		sum += x->n;
		x = x->next;
	}
	return (sum);
}
