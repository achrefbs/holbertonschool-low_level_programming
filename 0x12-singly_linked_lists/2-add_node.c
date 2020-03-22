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
 * *add_node - a function that adds a new node at the beginning of a list.
 * @head : head
 * @str : pointer to a string
 * Return: the address of the new element, or NULL if it failed
 */
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

