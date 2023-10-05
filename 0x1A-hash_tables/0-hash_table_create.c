#include "hash_tables.h"
/**
 * hash_table_create - .........
 * @size:size of the array.
 * Return:pointer to hash taple
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(hash_table_t));
	if (ptr == NULL)
		return (NULL);

	ptr->array = malloc(sizeof(hash_node_t *) * size);
	if (ptr->array == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->size = size;
	for (i = 0; i < size; i++)
		ptr->array[i] = NULL;
	return (ptr);
}
