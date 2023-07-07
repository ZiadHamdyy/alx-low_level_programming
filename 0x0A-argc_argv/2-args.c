#include <stdio.h>
/**
 * main -  prints all arguments it receives.
 * @argc:number of command line argument.
 * @argv:pointer to an array of command line argument.
 * Return:always return 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
