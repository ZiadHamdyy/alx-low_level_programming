#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array:the int array.
 * @size:the size.
 * @action:the function pointer.
 * Return:nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *x = array + size - 1;

	if (array && size && action)
	{
		while(array <= x)
			action(*array++);
	}	
}
