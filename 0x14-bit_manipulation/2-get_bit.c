#include "main.h"
/**
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num_bits = sizeof(unsigned long int) * 8;
	 unsigned long int mask = 1UL << index;
	 int bit_value = (n & mask) ? 1 : 0;

	if (index >= num_bits) {
        return -1;
    }
	return bit_value;

}
