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
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
