#include "hash_tables.h"
/**
 * hash_table_print - ...........
 * @ht:the hash table.
 * Return:void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int flag = 1;
	hash_node_t *node;

	printf("{");
	while (ht->size > i)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (!flag)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag = 0;
			node = node->next;
		}
		i++;
	}
	printf("}\n");
}
