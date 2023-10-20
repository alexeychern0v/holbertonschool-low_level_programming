#include "main.h"
/**
 *more_numbers - print 10 times numbers from 0 to 14
 */
void more_numbers(void)
{
	int k = 1;
	int a = 0;

	while (k <= 10)
	{
		for (a = 0; a < 15; a++)

			if (a < 9)
			{
				_putchar(a % 10 + '0');
			}
			else 
			{
				_putchar(a / 10 + '0');
				_putchar(a % 10 + '0');
			}
		_putchar('\n');
		k++;
	}
}
