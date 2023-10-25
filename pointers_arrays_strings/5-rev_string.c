#include "main.h"
/**
 * rev_string - print string in reverse
 *
 * @s: string to print
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	int j = 0;
	char *str;

	while (s[len] != '\0')
	{
		len++;
	}
	while (len > i)
	{
		str[j] = s[len];
		len--;
		j++;
	}
	str[j++] = '\0';
	_putchar('\n');
}
