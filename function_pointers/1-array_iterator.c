#include "function_pointers.h"
/**
 * array_iterator - print array
 *
 * @array: array
 *
 * @size: size of array
 *
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t t;

	for (t = 0; t < size; t++)
		action(array[t]);
}
