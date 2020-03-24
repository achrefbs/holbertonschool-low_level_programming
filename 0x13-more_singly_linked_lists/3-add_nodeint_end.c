#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * *add_nodeint_end -  a function that adds a new node at the end of a list.
 * @head : head
 * @n : data
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *t;

	t = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (t->next)
	{
		t = t->next;
	}

	t->next = new;
	return (new);
}
