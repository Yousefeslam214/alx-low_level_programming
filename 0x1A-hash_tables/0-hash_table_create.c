#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash;
    hash = malloc(sizeof(hash_table_t));
    if(!hash)
        return NULL;
    hash->array = malloc(sizeof(hash_node_t));
    if (!hash->array)
    {
        free(hash);
        return NULL;
    }
    hash->size = size;
    return (hash);
}
