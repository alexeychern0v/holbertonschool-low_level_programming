#include "main.h"

/**
 * clear_bit - set value of a bit to 0
 * 
 * @n: the number
 * 
 * @index: the index
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clearb = ~(1UL << index);

	if (index >= sizeof(unsigned long int) * CHAR_BIT)
		return (-1);
	*n &= clearb;
	return (1);
}
