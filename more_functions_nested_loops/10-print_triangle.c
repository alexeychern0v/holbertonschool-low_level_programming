#include "main.h"
/**
 * print_triangle - print a triangle
 *
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int k, m = 0;
	int space;

	if (size > 0)
	{
		while (m < size)
		{
			space = size - m - 1;
			while (k < size)
			{
				if (space > k)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				k++;
			}
			m++;
			k = 0;
			_putchar ('\n');
		}
	}
	else
		_putchar('\n');
}
