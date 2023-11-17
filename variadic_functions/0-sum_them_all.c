#include "variadic_functions.h"
/**
 * sum_them_all - sum of all parameters
 *
 * @n: n arguments
 *
 * Return: sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(args, int);
	va_end(args);
	return (sum);
}
