#include "main.h"
/**
 * print_last_digit -  prints the last digit of a number.
 * @n:its a number may be more then one digit.
 * Return: the value of the last digit.
 */
int print_last_digit(int n)
{
	if (n % 10 < 0)
	{
		n = n * -1;
		_putchar (n % 10 + '0');
		return (n % 10);
	}
	else
	{
		_putchar (n % 10 + '0');
		return (n % 10);
	}
}
