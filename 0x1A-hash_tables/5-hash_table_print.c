#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_print - a function that prints a hash table.
 * @ht : hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	int first = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i <= ht->size; i++)
	{
		if (ht->array[i])
		{
			while (ht->array[i])
			{
				if (first != 0)
					printf(", ");
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				first = 1;
				ht->array[i] = ht->array[i]->next;
			}
		}
	}
	printf("}\n");
}
