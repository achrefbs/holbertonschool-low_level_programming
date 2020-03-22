#include "lists.h"
#include <string.h>
#include <stdlib.h>
list_t *add_node(list_t **head, const char *str)
{
	list_t *s;
	s = malloc(sizeof(list_t));
	if (s == NULL)
	return (NULL);

	s->next = *head;
	s->str = strdup(str);
	*head = s;
	return (s);
}