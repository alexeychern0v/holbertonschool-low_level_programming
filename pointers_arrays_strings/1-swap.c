#include "main.h"

/**
 * swap_int - swap 2 int
 *
 * @a: character
 *
 * @b: character
 */
void swap_int(int *a, int *b)
{
	if (a != 0)
	{
		*a = b;
	}
	if (b != 0)
	{
		*b = a;
	}
}
