#include "main.h"
/**
 * _strncpy -  copies a string.
 * @dest: the distination.
 * @src:the atring that will copied.
 * @n:the number of element that will copied.
 * Return:return the dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if (dest[i] == '\0' || src[i] == '\0' || n == 0)
		return (dest);

	while (i < n && dest[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
