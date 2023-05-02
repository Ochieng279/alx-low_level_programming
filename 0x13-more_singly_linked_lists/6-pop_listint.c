#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: the remaonng elements after deletion
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (i);
}
