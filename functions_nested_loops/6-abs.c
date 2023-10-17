#include "main.h"

/**
 * _abs - find the absolute value of int
 *
 *@k: number
 *
 * Return: 0 succes
 */
int _abs(int k)
{
	if (k > 0)
		return (k);
	else if (k < 0)
	{
		int abs_k;
		
		abs_k = k * -1;
		return (abs_k);
	}
	return (0);
}
