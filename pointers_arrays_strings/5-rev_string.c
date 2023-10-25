#include "main.h"
/**
 * rev_string - print string in reverse
 *
 * @s: string to print
 */
void rev_string(char *s)
{
	int len = 0;
	int i, temp;
	
	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; len++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[i] = temp;
		_putchar(s[i]);
	}
	_putchar('\n');
}

