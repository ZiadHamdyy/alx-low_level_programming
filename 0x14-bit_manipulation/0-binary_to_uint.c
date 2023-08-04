#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars.
 * Return:the converted number, or 0 if.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i = 0;

	for (i = 0;b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			sum = sum << 1;
		else if (b[i] == '1')
			sum = (sum << 1) | 1;
		else
			return (0);
	}
	return (sum);
}
