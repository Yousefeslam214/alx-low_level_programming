#include "hash_tables.h"


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *node;
    unsigned long int index;
    if (!ht || !key || !value)
        return (0);
    node = malloc(sizeof(hash_node_t));
    if (!node)
        return (0);
    node->key = strdup(key);
    node->value = strdup(value);
    index = key_index((const unsigned char *)key, ht->size);
    if (!ht->array[index])
    {
        ht->array[index] = node;
        return (1);
    }
    return 0;




}
