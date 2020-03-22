#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
/**
 * struct list - singly linked list
 * @str : pointer to a string
 * @len : length of the string
 * @next : pointer to next
 */
typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
#endif