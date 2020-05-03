#include "lists.h"
/**
 * get_dnodeint_at_index - a function that returns the nth node of a list.
 * @head : head
 * @index : index
 * Return: returns the nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && i <= index)
	{
		if (i == index)
		return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
