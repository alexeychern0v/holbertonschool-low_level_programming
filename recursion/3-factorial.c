#include "main.h"
/**
 *factorial - print factorial of a number using recursion
 *
 *@n: number for factorial
 *
 *Return: result
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
