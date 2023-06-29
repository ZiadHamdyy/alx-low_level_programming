#include "main.h"
/**
 * cap_string -  capitalizes all words of a string.
 * @str:the string.
 * Return:the capitalizes.
 */
char* cap_string(char* str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' ||
		str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			 if (str[i + 1] > 96 && str[i + 1] < 123)
                        {
                                str[i + 1] = str[i + 1] - 32;
                        }
		}
			 
		i++;
	}
	return (str);
}
