#include "main.h"
/**
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 1, sum = 0;
	int i = 0;


	while (b[i] != '\0')
		i++;

	i = i - 1;
	for (; i >= 0 ; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if(b[i] == '1')
			sum += j;
		j = j + j;
	}
	return (sum);
}
