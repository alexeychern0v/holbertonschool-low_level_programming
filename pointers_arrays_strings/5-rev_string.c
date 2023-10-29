#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int len = 0, a = 0;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}
	a = len;
	for (a = len - 1; a >= (len / 2); a--)
	{
		temp = s[a];
		s[a] = s[len - a - 1];
		s[len - a - 1] = temp;
	}
}
