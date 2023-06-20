#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: is a number may be its absolute or not.
 * Return: number as a absolute value.
 */
int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
