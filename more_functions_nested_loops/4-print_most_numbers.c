#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
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
