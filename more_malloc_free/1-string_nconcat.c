#include "main.h"
#include <stdlib.h>

/**
  *string_nconcat - concatenates two strings wit limit
  *
  *@s1: string
  *
  *@s2: string
  *
  *@n: limit
  *
  *Return: a poiner
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size1 = 0;
	int size2 = 0;
	int sizeall = 0;
	int j = 0;
	int i;
	char *s;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	sizeall = size1 + size2 + 1;
	s = malloc(sizeall * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		s[i] = s1[i];
	if (n >= size2)
	{
		for (j = 0; j < size2; j++)
		{
			s[i + j] = s2[j];
		}
	}
	if (n < size2)
	{
		while (j < n)
		{
			s[i + j] = s2[j];
			j++;
		}
	}
	s[i + j] = '\0';
	return (s);
}
