#include "lists.h"
#include <string.h>
#include <stdlib.h>
int strlength(const char *s);
list_t *add_node(list_t **head, const char *str)
{
	list_t *s;
	s = malloc(sizeof(list_t));
	if (s == NULL)
	return (NULL);

	s->next = *head;
	s->str = strdup(str);
	s->len = strlength(str);
	*head = s;
	return (s);
}
int strlength(const char *s)
{
	int i;
	for(i = 0; s[i] != '\0'; i++)
	;
	return(i);
}