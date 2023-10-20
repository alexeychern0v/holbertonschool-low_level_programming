#include "main.h"
/**
 * print_square - print square
 *
 *@size: square size
 *
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int n = 0;
	int m = 0;

	if (size > 0)
	{
		for (n = 0; n < size; n++)
		{
			for (m = 0; m < size; m++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
