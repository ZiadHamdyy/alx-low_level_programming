#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * @c: the letter that we will check.
 * Return: 1 if the letter is uppercase and 0 if its lowercase.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
