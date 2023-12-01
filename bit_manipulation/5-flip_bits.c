#include "main.h"

/**
 * flip_bits - function that gets number of bits needed to flip
 *
 * @n: the number
 *
 * @m: The number
 *
 * Return: The number of fliped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
