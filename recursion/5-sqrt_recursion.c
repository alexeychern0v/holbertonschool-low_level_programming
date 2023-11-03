#include "main.h"
/**
 *_sqrt_recursion - print square root of a number
 *
 *_sqrt_recursion1 - another func
 *@n: number
 *
 *Return: result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
}

int _sqrt_recursion1(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion1(n, a + 1));
	}
}
