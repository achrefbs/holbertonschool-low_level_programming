#include "hash_tables.h"
#include <string.h>

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int idx;
    hash_node_t *node, *tmp;
    if (key == NULL)
        return 0;
    idx = key_index((const unsigned char *)key, ht->size);

    tmp = ht->array[idx];
    if(tmp)
    {
        if (strcmp(tmp->key, key) == 0)
            tmp = tmp->next;
        if (strcmp(tmp->key, key) == 0)
        {
            tmp->value = strdup(value);
            return 1;
        }
        return 1;
    }

    node = malloc(sizeof(hash_node_t));
    if (node == NULL)
    return 0;
    node->key = (char *)(key);
    node->value = strdup(value);
    node->next = ht->array[idx];
    ht->array[idx] = node;
    return 1;

}