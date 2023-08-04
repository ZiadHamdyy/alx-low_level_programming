#include "main.h"
/**
 * count_set_bits - count_set_bits.
 * @num:count_set_bits.
 * Return:count_set_bits.
 */
unsigned int count_set_bits(unsigned long int num)
{
	unsigned int count = 0;

	while (num)
	{
		count += num & 1;
		num >>= 1;
	}
	return (count);
}
/**
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int flipped_bits = count_set_bits(xor_result);

	return flipped_bits;
}
