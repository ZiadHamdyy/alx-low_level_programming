#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index.
 * @n:a number.
 * @index: is the index, starting from 0 of the bit you want to get.
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num_bits = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1UL << index;
	int bit_value = (n & mask) ? 1 : 0;

	if (index >= num_bits)
		return (-1);

	return (bit_value);

}
