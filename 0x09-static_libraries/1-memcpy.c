#include "main.h"
/**
 * _memcpy -  copies memory area.
 * @dest:a string that we will copy in.
 * @src:the string that we will copy from.
 * @n:the munber.
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
