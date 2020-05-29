#include "hash_tables.h"
#include <string.h>

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int idx;
    hash_node_t *node;
    if (strcmp(key, "") || key == NULL)
        return 0;
    idx = key_index((const unsigned char *)key, ht->size);
    /*
    while (ht->array[idx])
    {
         code 
    }
    */
    node = malloc(sizeof(hash_node_t));
    if (node == NULL)
        return 0;
   

    node->key = (char *)key;
    node->value = (char *)value;
    node->next = ht->array[idx];


    ht->array[idx] = node;
    return 1;

}