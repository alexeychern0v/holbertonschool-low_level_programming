#include"main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 *
 * @str: The string to be changed.
 *
 * Return: a changed pointer
 */
char *string_toupper(char *str)
{
	int len = 0;

	while (str[len] != '\n')
	{
		if (str[len] >= 92 && str[len] <= 122)
		{
			str[len] -= 32;
		}
		len++;
	}
	return (str);
}
