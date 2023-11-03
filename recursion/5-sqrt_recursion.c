#include "main.h"
int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * _sqrt_recursion1 - find the natural square root of a number.
 * 
 * @n: the number
 *
 * @a: the root to test
 *
 * Return: result
 */
int find_sqrt(int n, int a)
{
	if ((a * a) == n)
		return (a);

	if (a == n / 2)
		return (-1);

	return (find_sqrt(n, a + 1));
}

/**
 * _sqrt_recursion - find the natural square root of a number.
 *
 * @n: the number
 *
 * Return: result
 */
int _sqrt_recursion(int n)
{
	int a = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, a));
}
