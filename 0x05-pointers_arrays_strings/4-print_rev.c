#include "main.h"
/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 * @s:a string.
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	a = a - 1;

	while (0 <= a)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}
