#include "lists.h"
#include <stdlib.h>
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *t;
	unsigned int i;
	t = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);
	for (i = 1; i < idx && t->next != NULL; i++)
	t = t->next;
	if (i < idx)
	return (NULL);
	new->n = n;
	new->next = t->next;
	t->next = new;
	return (new);

}