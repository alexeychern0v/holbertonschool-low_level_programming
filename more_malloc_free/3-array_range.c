#include "main.h"
#include <stdlib.h>

/**
 * array_range - array from min to max
 *
 * @min: min
 *
 * @max: max
 *
 * Return: result array
 */
int *array_range(int min, int max)
{
	int *s;
	int pos;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	s = malloc(sizeof(int) * size);

	if (s == NULL)
		return (NULL);

	for (pos = 0; pos < size; pos++)
	{
		s[pos] = min;
		min++;
	}
	return (s);
}
