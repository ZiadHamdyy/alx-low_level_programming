#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name:the string name.
 * @f:the printing function pointer.
 * Return:void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
