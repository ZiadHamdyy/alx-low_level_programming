#include "hash_tables.h"
/**
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr;

	ptr = malloc(sizeof(hash_node_t *) * size);
	return (ptr);
}
