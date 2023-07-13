#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min:int type.
 * @max:int type.
 * Return:If min > max, return NULL.
 * If malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == 0)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		ptr[i] = min + i;

	return (ptr);
}
