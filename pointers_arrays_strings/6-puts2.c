#include "main.h"

/**
 * puts2 - print every other character of a string
 *
 * @str: string to print
 */
void puts2(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\n')
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
