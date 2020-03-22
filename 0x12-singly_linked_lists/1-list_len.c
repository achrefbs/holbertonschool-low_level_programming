#include <stdio.h>
#include "lists.h"
size_t list_len(const list_t *h)
{
	int n;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}