#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n:a number.
 * @index: is the index, starting from 0 of the bit you want to get.
 * Return:1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num_bits = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1UL << index;

	if (index >= num_bits)
		return (-1);
	*n |= mask;
	return (1);
}
