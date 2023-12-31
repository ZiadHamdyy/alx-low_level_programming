#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a:an array of integers
 * @n:the number of the element to swap
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		int temp = a[i];

		a[i] = a[j];
		a[j] = temp;
	}
}
