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
    else
    {
        hash_node_t *ptr = ht->array[index];

        while (ptr)
        {
            if(strcmp(ptr->key, key) == 0)
            {
                free(node->value);
                ptr->value = strdup(value);
                return (1);
            }
            ptr = ptr->next;
        }
        node->next = ht->array[index];
        ht->array[index] = node;
        return (1);
    }
}
