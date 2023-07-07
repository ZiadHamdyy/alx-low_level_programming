#include <stdio.h>
include < stdlib.h >
/**
 * main -  multiplies two numbers.
 * @argc:number of command line argument.
 * @argv:pointer to an array of command line argument.
 * Return:If the program does not receive two arguments
 * your program should print Error, followed by a new line, and return 1
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
