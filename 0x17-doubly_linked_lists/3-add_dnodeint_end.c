#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head : head
 * @n : data
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	tmp = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->next = NULL;
		new->n = n;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while ((tmp)->next != NULL)
	{
		tmp = (tmp)->next;
	}
	(tmp)->next = new;
	new->prev = tmp;
	new->next = NULL;
	new->n = n;
	return (new);
}
