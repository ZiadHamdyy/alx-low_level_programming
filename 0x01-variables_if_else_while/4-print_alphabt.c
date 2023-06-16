#include <stdio.h>
/**
 * main - Print from a to z except q and e
 *
 * Return: Always 0.
 */
int main(void)
{
        char ch = 'a';

        while (ch <= 'z')
        {
		if (ch == 'q' || ch == 'e')
		{
			ch++;
			continue;
		}
		putchar(ch);
		ch++;
        }
        putchar('\n');
        return (0);
}
