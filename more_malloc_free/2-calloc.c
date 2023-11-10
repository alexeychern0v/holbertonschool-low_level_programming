#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 *@nmemb: the number of elements
 *
 *@size: size
 *
 *Return: result
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(size * nmemb);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		s[i] = 0;
	return (s);
}
