#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * *add_nodeint - a function that adds a new node at the beginning of a list.
 * @head : head
 * @n : data
 * Return: New node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);

	new->next = *head;
	new->n = n;
	*head = new;
	return (new);

}
