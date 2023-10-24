#include "main.h"

/**
 * puts_half - print half of a string
 *
 * @str: string to print
 */
void puts_half(char *str)
{
	int len = 0;
	int half;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		half = len / 2;
		while (half < len)
		{
			_putchar(str[half]);
			half++;
		}
	}
	else
	{
		half = (len - 1) / 2;
		while (half < (len - 1))
		{
			_putchar(str[half]);
			half++;
		}
	}
	_putchar('\n');
}
