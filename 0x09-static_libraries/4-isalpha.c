#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: lowercase or uppercase
 * Return: 1 if the letter is lowercase or uppercase otherwise return 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
