#include <stdio.h>
#include "lists.h"
/**
 * listint_len -  a function that returns the number of elements
 * @h : head
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
