#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - a function that frees a listint_t list.
 * @head : head
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head;
		head = head->next;
		free(t);
	}
}
