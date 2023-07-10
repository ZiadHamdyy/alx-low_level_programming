#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * size - calculate a size of a string.
 *@s:a string.
 *Return:the lenght of a string.
 */
int size(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 *str_concat - concatenates two strings.
 *@s1:first string.
 *@s2:second string.
 *Return: concatenates two strings.
 *NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *ar;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = size(s1);
	size2 = size(s2);

	ar = malloc((size1 + size2) * sizeof(char) + 1);

	if (ar == 0)
		return (0);

	for (i = 0; i <= (size1 + size2); i++)
	{
		if (i < size1)
		{
			ar[i] = s1[i];
		}
		else
			ar[i] = s2[i - size1];
	}
	ar[i] = '\0';
	return (ar);
}
