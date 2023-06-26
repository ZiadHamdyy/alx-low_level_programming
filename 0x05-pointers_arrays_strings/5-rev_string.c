#include "main.h"
/**
 * _len - length of string.
 * @s;a string.
 * Return:the length.
 */
int _len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * rev_string - reverses a string.
 * @s:a string.
 */
void rev_string(char *s)
{
	int i = _len(s), j = 0, last = i - 1;
	char a;

	while (j < i / 2)
	{
		a = s[j];
		s[j] = s[last];
		s[last] = a;
		j++;
		last--;
	}
}
