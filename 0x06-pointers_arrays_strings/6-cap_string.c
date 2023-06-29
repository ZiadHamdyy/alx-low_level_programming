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
		str[i] == ')' || str[i] == '{' || str[i] == '}' ||str[i] == '\t' ||
		str[i] == '\n')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
			 
		i++;
	}
	return (str);
}
