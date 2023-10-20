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
	int k;
	int space;

	if (n > 0)
	{
		for (k = 0; k < n; k++)
		{
			for (space = 0; space < k; space++)
			{
			    _putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
