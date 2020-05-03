#include "lists.h"
/**
 * free_dlistint - a function that free a dlistint_t list.
 * @head : head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
