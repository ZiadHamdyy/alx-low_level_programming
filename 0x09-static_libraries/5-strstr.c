#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring.
 * @haystack:the string to be searched.
 * @needle:the substring to search for within the haystack string.
 * Return:a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *p1 = haystack;

	if (!*needle)
	{
		return (p1);
	}
	while (*p1)
	{
		char *p1_begin = p1, *p2 = needle;

		while (*p1 && *p2 && *p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (!*p2)
		{
			return (p1_begin);
		}
		p1 = p1_begin + 1;
	}
	return (NULL);
}
