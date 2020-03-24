#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - a function that frees a listint_t list.
 * @head : head
 */
void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL)
	return;
	while (*head)
	{
		t = *head;
		*head = (*head)->next;
		free(t);
	}
	head = NULL;
}
