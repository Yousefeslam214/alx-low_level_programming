#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key, can not be an empty string
 * @value: is the value associated with the key, must be duplicated
 * Return: 1 if it succeeded, 0 otherwis
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;

	if (!key || !value || !ht || *key == '\0')
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (!node)
	{
		free(node);
		return (0);
	}
	node->key = (char *)key;
	node->value = (char *)value;
	index = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[index])
	{
		ht->array[index] = node;
		return 1;
	}
	else
	{
		hash_node_t *ptr = ht->array[index];

		while (ptr)
		{
			if (strcmp(ptr->key,key) == 0)
			{
				free(node->value);
				node->value = (char *)value;
				return (1);
			}
			ptr = ptr->next;
		}
		node->next = ht->array[index];
		ht->array[index] = node;
		return (1);
	}
}
