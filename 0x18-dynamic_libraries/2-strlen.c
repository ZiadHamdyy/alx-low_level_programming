#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 * @s:the length of a string.
 * Return:the length of a string.
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;
	return (a);
}
