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
	unsigned int size1;
	unsigned int size2;
	int sizeall;
	unsigned int j;
	unsigned int i;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	if (n >= size2)
		n = size2;
	sizeall = size1 + n + 1;
	s = malloc(sizeall * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
		s[i + j] = s2[j];
	s[i + j] = '\0';
	return (s);
}
