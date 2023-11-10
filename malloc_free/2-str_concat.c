#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 *
 * @s1: char
 *
 * @s2: char
 *
 * Return: string
 */

char *str_concat(char *s1, char *s2)
{
	int size1 = 0;
	int size2 = 0;
	int i;
	char *r;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	r = (char *)malloc(size1 + size2 + 1);
	if (r == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		r[i] = s1[i];
	for (i = 0; i < size2; i++)
		r[size1 + i] = s2[i];
	r[size1 + size2] = '\0';
	return (r);
}
