#include "main.h"
/**
 * print_most_numbers - print numbers from 0 to 9 except 2 and 4
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int digit = 0;

	for (digit = 0; digit <= 9; digit++)
	{
		if (digit != 2 && digit != 4)
		{
			_putchar(digit % 10 + '0');
		}
	}
	_putchar('\n');
}
