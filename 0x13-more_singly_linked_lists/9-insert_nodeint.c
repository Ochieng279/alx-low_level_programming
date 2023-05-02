#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node in a linked list/
 * in a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *x = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; x && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = x->next;
			x->next = new;
			return (new);
		}
		else
			x = x->next;
	}
	return (NULL);
}
