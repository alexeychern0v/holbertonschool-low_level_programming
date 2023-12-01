#include "main.h"

/**
 * set_bit - set a value of a bit to 1
 *
 * @n: the number
 *
 * @index: index
 *
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set = 1UL << index;
	
	if (index >= sizeof(unsigned long int) * CHAR_BIT)
		return (-1);

	*n |= set;
	return (1);
}
