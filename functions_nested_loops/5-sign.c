#include "main.h"

/**
 * print_sign - check if number is positive negative or zero
 *
 * @n: character to check
 *
 * Return: 1 if number is positive, -1 if number is negative and  0 if zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
