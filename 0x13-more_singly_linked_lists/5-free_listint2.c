#include "lists.h"
/**
 * free_listint2 - function that frees a linked list
 * @head: pointer to the listint_t list to be freed
 * Return: always 0
 */
void free_listint2(listint_t **head)
{
	listint_t *x;

	if (head == NULL)
		return;

	while (*head)
	{
		x = (*head)->next;
		free(*head);
		*head = x;
	}
	*head = NULL;
}
