#include "lists.h"
/**
 * delete_dnodeint_at_index -  deletes the node at index of a linked list.
 * @head : head
 * @index : index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	tmp = *head;
	if (*head == NULL)
		return (-1);
		if (index == 0)
		{
			tmp = tmp->next;
			free(*head);
			*head = tmp;
			if (tmp != NULL)
				tmp->prev = NULL;
			return (1);
		}
	for (i = 0; i <= index - 1; i++)
	{
		tmp = tmp->next;
		if (!tmp)
			return (-1);
	}
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
