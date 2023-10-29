#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int len = 0;

	while (str[len])
	{
		while (str[len] >= 97 && str[len] <= 122)
		{
			len++;
		}
		if (str[len - 1] == ' ' || str[len - 1] == '\t' || str[len - 1] == '\n' || str[len - 1] == ',' || str[len - 1] == ';' || str[len - 1] == '.' || str[len - 1] == '!' || str[len - 1] == '?' || str[len - 1] == '"' || str[len - 1] == '(' || str[len - 1] == ')' || str[len - 1] == '{' || str[len - 1] == '}' || len == 0)
		{
			str[len] -= 32;
		}
		lem++;
	}
	return (str);
}
