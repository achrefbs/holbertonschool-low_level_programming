#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht : hash table
 * @key : key
 * @value : the value
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node, *tmp;

	if (!key || !value || !ht)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[idx];
	while (tmp)
	{
		if (tmp && strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	return (0);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node->key);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->value);
		return (0);
	}
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
