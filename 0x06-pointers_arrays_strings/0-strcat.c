#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest:a string.
 * @src:a string.
 * Return:a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0 ; src[j] != '\0'; j++)
	{
		dest[i] = dest[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
