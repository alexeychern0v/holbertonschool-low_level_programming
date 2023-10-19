#include "main.h"
/**
 * print_diagonal - print diagonal
 *
 *@n: number of lines
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int k = 0;

	if (n > 0)
	{
		for (k = 0; k < n; k++)
		{
			_putchar(32);
			_putchar(92);
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
