#include "main.h"
/**
 * rev_string - print string in reverse
 *
 * @s: string to print
 */
void rev_string(char *s)
{
	int len, i, j = 0;
	char w;

	while (s[len] != '\0')
	{
		len++;
	}
	while (i != len)
	{
		w[j] = s[len];
		len--;
		j++;
	}
	w[j++] ='\0';
	_putchar('\n');
}
