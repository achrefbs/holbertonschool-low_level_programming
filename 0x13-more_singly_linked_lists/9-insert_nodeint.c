#include "lists.h"
#include <stdlib.h>
/**
 * *insert_nodeint_at_index - a function that inserts a new node at a position.
 * @head : head
 * @idx : the index of the list
 * @n : the data of the new node
 * Return: &the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *t;
	unsigned int i;

	t = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);
	if (*head == NULL)
	{
		*head = new;
		new->n = n;
		new->next = NULL;
		return (new);
	}
	if (idx == 0)
	{
		new->next = *head;
		new->n = n;
		*head = new;
		return (new);
	}
	for (i = 1; i < idx && t->next != NULL; i++)
	t = t->next;
	if (i < idx)
	return (NULL);
	new->n = n;
	new->next = t->next;
	t->next = new;
	return (new);
}
