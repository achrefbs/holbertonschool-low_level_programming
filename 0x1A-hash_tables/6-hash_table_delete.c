#include "hash_tables.h"
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned int i;
	if (!ht)
		return;
	for (i = 0; i <= ht->size; i++)
	{
		if (ht->array[i])
		{
			while (ht->array[i])
			{
				tmp = ht->array[i]->next;
				free(ht->array[i]->value);
				free(ht->array[i]->key);
				free(ht->array[i]);
				ht->array[i] = tmp;
			}
		}
	}
	free(ht->array);
	free(ht);
}