#include "main.h"

/**
 * puts2 - print every other character of a string
 *
 * @str: string to print
 */
void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (len -= 1; len >= 0; len -= 2)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
