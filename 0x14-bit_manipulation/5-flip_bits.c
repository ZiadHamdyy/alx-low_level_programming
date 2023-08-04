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
 * flip_bits -  returns the number of bits you would need to flip to get
 * from one number to another.
 * @n:a number.
 * @m:a number.
 * Return:returns the number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int flipped_bits = count_set_bits(xor_result);

	return (flipped_bits);
}
