#include "hash_tables.h"
/**
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;
	const hash_table_t *ha = ht;

	if (ha == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = hash_djb2((const unsigned char *)key) % ha->size;
	node = ha->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
