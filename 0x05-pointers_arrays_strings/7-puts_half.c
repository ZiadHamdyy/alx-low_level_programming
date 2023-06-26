#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str:a string.
 */
void puts_half(char *str)
{
	int i = 0, n;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 1)
	{
		n = (i - 1) / 2;
	}
	else
	{
		n = i / 2;
	}

	for (n = n ; n <= i ; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
