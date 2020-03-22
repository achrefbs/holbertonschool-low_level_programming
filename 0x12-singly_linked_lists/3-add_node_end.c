#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * strlength - returns the length of a string
 * @s : pointer to a string
 * Return: length
 */
int strlength(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	;
	return (i);
}
/**
 * *add_node_end - a function that adds a new node at the end of a list_t list.
 * @head : head
 * @str : pointer to a string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *s;
	list_t *t;

	t = *head;
	s = malloc(sizeof(list_t));
	if (s == NULL)
	return (NULL);
	s->str = strdup(str);
	s->len = strlength(str);
	s->next = NULL;
	if (*head == NULL)
	{
		*head = s;
		return (s);
	}
	while (t->next)
	{
		t = t->next;
	}
	t->next = s;
	return (s);
}
