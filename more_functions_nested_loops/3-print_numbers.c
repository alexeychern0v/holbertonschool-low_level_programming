#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int digit = 0;

	for (digit = 0; digit <= 9; digit++)
		_putchar(digit % 10 + '0');
	_putchar('\n');
}
