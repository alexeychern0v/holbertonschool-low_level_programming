#include "main.h"
/**
 * times_table - create times table
 *
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int kolvo = 0;
	int num = 0;
	int result;

	for (num = 0; num < 10; num++)
	{
		for (kolvo = 0; kolvo < 10; kolvo++)
		{
			result = num * kolvo;
			if (result > 9)
			{
				_putchar(result / 10 + '0');
				_putchar (result % 10 + '0');
			}
			else if (result < 9)
			{
				if (kolvo != 0)
				{
					_putchar(' ');
					_putchar(result % 10 + '0');
				}
				else
				{
					_putchar(result % 10 + '0');
				}
			}
			if (kolvo != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			
		}
		_putchar('\n');
	}
}
