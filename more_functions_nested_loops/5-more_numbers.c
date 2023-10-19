#include "main.h"
/**
 *more_numbers - print 10 times numbers from 0 to 14
 */
void more_numbers(void)
{
	int k = 1;Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line.

Prototype: void more_numbers(void);
You can only use _putchar three times in your code
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
