#include "main.h"
/**
 * print_line - print line
 *
 *@n: number of lines
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int k = 0;

	if (n > 0)
	{
		for (k = 0; k < n; k++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
