#include "main.h"
/**
 *_strlen_recursion - print lenght of a string using recursion
 *
 *@s: string to print
 *
 *Return: length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
	_putchar('\n');
}
