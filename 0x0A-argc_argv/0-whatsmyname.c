#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @argc:number of command line argument.
 * @argv:pointer to an array of command line argument.
 * Return:always return 0.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
