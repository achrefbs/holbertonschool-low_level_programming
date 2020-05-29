#include "hash_tables.h"
#include <string.h>

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int idx;
    hash_node_t *node;
    if (key == NULL)
        return 0;
    idx = key_index((const unsigned char *)key, ht->size);
    /*
    if (ht->array[idx])
    while(ht->array[idx])
    {
        if (ht->array[idx] && strcmp(ht->array[idx]->key, key) == 0)
        {
            free(ht->array[idx]->value);
            ht->array[idx]->value = strdup(value);
            if (ht->array[idx]->value == NULL)
                return 0;
            return 1;
        }
        if (ht->array[idx])
        ht->array[idx] = ht->array[idx]->next;
    }*/

    node = malloc(sizeof(hash_node_t));
    if (node == NULL)
    return 0;
    node->key = strdup(key);
    if (node->key == NULL)
    return 0;
    node->value = strdup(value);
    if (node->value == NULL)
    return 0;
    node->next = ht->array[idx];
    ht->array[idx] = node;
    return 1;

}