#include "main.h"

/**
 * binary_to_uint - convert binary to int
 *
 * @b: char of binary
 *
 * Return: converted int
 */

unsigned int binary_to_uint(const char *b)
{
	int a = 1;
	int sum = 0;
	int n = 0;
	int times;
	int i;
	int v;

	while (b[n] != '\0')
	{
		n++;
	}
	v = n - 1;
	for (i = 0; i < n; i++)
	{
		if (b[i] == '1')
		{
			for (times = 0; times < v - i; times++)
			{
				a *= 2;
			}
		sum = sum + a;
		a = 1;
		times = 0;
		}
	}
	return (sum);
}
