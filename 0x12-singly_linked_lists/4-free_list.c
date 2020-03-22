#include "lists.h"
#include <stdlib.h>
/**
 * free_list - a function that frees a list_t list.
 * @head : head
 */
void free_list(list_t *head)
{
	list_t *t;

	while (head)
	{
		t = head;
		head = head->next;
		free(t->str);
		free(t);
	}
}
