#include "main.h"

/**
 * puts2 - print every other character of a string
 *
 * @str: string to print
 */
void puts2(char *str)
{
	for (; *str != '\0'; str += 2)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
