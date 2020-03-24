#include "lists.h"
/**
 * sum_listint - a function that returns the sum of all the data.
 * @head : head
 * Return: data sum
 */
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
