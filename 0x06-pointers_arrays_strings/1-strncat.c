#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest:first string.
 * @src:second dtring.
 * @n:the bytes from src.
 * Return:the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0 ; j < n && src[j] != '\0' ; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';

	return (dest);
}
