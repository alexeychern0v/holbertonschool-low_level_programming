#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 *@n: natural number
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 99; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else if (n > 98)
	{
		for (; n > 97; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		printf("98");
	}
}
