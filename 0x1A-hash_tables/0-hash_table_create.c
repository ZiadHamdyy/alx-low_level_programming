#include "hash_tables.h"
/**
 * hash_table_create - .........
 * @size:size of the array.
 * Return:pointer to hash taple
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr;

	ptr = malloc(sizeof(hash_node_t *) * size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
