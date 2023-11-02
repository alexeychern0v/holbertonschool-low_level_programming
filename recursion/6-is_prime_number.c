#include "main.h"
/**
 *is_prime_number - check if int is a prime number
 *
 *@n: int to check
 *
 *Return: the result
 */
int is_prime_number(int n)
{
	if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n > 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
