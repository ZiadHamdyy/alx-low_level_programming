#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index -  searches for an integer.
 * @array:the array.
 * @size:the size of the array.
 * @cmp:the function pointer.
 * Return:If no element matches, return -1.
 * If size <= 0, return -1.
 * else return element.1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x, i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			x = cmp(array[i]);

			if (x != 0)
			{
				return (i);
			}
		}
		return (-1);
	}
	return (-1);
}
