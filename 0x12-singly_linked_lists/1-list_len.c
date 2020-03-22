#include <stdio.h>
#include "lists.h"
/**
 * list_len - a function that returns the number of elements in a linked list.
 * @h : head
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
