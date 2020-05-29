#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht : hash table.
 * @key : key
 * Return: the value associated with the key, or NULL if couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp;

	if (!ht || !key)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
