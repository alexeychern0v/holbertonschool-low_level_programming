#include "main.h"

/**
 * print_last_digit - find last digit of number
 *
 * @m: number to check
 *
 * Return: last digit
 */
int print_last_digit(int m)
{
	int last;

	last = m % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	return (last);
}
