#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n:a number.
 * Return:void.
 */
void print_binary(unsigned long int n)
{
	int i, num_bits = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1UL << (num_bits - 1);
	int found_first_one = 0;

	for (i = 0; i < num_bits; i++)
	{
		if ((n & mask) || found_first_one)
		{
			putchar((n & mask) ? '1' : '0');
			found_first_one = 1;
		}
		mask >>= 1;
	}
	if (!found_first_one)
	{
		putchar('0');
	}
}
