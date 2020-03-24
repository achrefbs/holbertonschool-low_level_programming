#include "lists.h"
#include <stdlib.h>
void free_listint2(listint_t **head)
{
	listint_t *t;

	while (*head)
	{
		t = *head;
		*head = (*head)->next;
		free(t);
	}
	head = NULL;
}