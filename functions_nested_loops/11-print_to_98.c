#include "main.h"
/**
 * main - Entry point
 *
 *@n: natural number
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = 0 ; n < 99; n++)
		{
			if (n < 0)
			{
				_putchar ('-');
				_putchar ((n * -1) % 10 + '0');
			}
			else if (n < -9)
			{
				_putchar('-');
				_putchar((n * -1) / 10 + '0');
				_putchar ((n * -1) % 10 + '0');
			}
			else if (n < 10)
			{
				_putchar (n % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(n / 10 + '0');
				_putchar (n % 10 + '0');
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
	}
	if (n > 99)
	{
		for (n = 0 ; n >= 98; n--)
		{
			if (n >= 100)
			{
				_putchar(n / 100 + '0');
				_putchar((n % 100) / 10 + '0');
				_putchar(n % 10 + '0');
			}
			else
			{
				_putchar(n / 10 + '0');
				_putchar (n % 10 + '0');
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
