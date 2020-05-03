#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	unsigned int i = 0;
	tmp = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (tmp)
	{
		tmp = tmp->next;
		i++;
		if(i == idx - 1)
		break;
		else if (i < idx - 1 && h == NULL)
		return(NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if(new == NULL)
		return (NULL);
	if (tmp->next == NULL)
		return add_dnodeint_end(h, n); /* change to h if not work*/

	tmp->next->prev = new;
	new->next = tmp->next;
	tmp->next = new;
	new->prev = tmp;
	new->n = n;
	return new;
	
	
}