#include "lists.h"
/**
 * free_listint - function that frees a linked list
 * @head: listint_t list to be freed
 * Return: always 0
 */
void free_listint(listint_t *head)
{
	listint_t *x;

	while (head)
	{
		x = head->next;
		free(head);
		head = x;
	}
}
