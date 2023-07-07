#include "main.h"
/**
 * _isdigit -  checks for a digit (0 through 9).
 * @c: the digit that we will check.
 * Return: 1 if the digit is a digit and 0 if its otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
