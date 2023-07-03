#include "main.h"
#include <stdio.h>
/**
 *  print_diagsums - prints the sum of the two diagonals of a square
 *  matrix of integers.
 *  @a:the number.
 *  @size:the size.
 */
void print_diagsums(int *a, int size)
{
	int i, sum_main = 0, sum_secondary = 0;

	for (i = 0; i < size; i++)
	{
		sum_main += a[i * size + i];
		sum_secondary += a[(i + 1) * size - i - 1];
	}
	printf("%d, ", sum_main);
	printf("%d\n", sum_secondary);
}
