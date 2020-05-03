#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h : head
 * Return: number of nodes
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