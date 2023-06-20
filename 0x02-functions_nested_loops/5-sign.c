#include "main.h"
/**
 * print_sign - prints the sign of a number.
 * @n:is a number.
 * Return: 1 and + if the number is greater then zero
 * Return: 0 and 0 if the number is equal then zero
 * Return: -1 and - if the number is less then zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
