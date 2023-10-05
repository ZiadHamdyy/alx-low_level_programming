#include "hash_tables.h"
/**
 * hash_table_set - .........
 * @ht:the hash table.
 * @key:the key.
 * @value:the value.
 * Return:1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL;
	unsigned long int index = 0;

	if (ht == NULL || node == NULL)
		return (0);

	index = hash_djb2((const unsigned char *)key) % ht->size;
	for (node = ht->array[index]; node; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (node->value == NULL)
				return 0;
			return 1;
		}
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup((char *)key);
	node->value = strdup((char *)value);

	if (node->key == NULL || node->value == NULL)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (0);
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
