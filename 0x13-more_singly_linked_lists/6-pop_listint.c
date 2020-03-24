#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint -  a function that deletes the head node
 * @head : head
 * Return: head data
 */
int pop_listint(listint_t **head)
{
	int n;

	if (*head == NULL)
	return (0);

	n = (*head)->n;
	free(*head);
	*head = (*head)->next;
	return (n);
}
