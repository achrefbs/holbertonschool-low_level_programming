#include "lists.h"
int sum_listint(listint_t *head)
{
	int n = 0;
	if (head == NULL)
	return (0);
	while (head)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}