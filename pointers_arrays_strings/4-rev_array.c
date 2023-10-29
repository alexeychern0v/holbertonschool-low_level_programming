#include "main.h"

/**
 * reverse_array - reverses an array
 *
 * @a: the array
 *
 * @n: The number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int temp, len;

	for (len = n - 1; len >= n / 2; len--)
	{
		temp = a[n - 1 - len];
		a[n - 1 - len] = a[len];
		a[len] = temp;
	}
}
