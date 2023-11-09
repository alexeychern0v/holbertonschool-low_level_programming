#include "main.h"
/**
  *str_concat - concatenates two strings
  *
  *@s1: string
  *
  *@s2: string
  *
  *Return: concatenated strings
  */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0;
	int size2 = 0;
	int sizeall = 0;
	int i, j;
	char *s;

	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	sizeall = size1 + size2 + 1;
	s = malloc(sizeall * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < size2; j++)
	{
		s[i + j] = s2[j];
	}
	s[i + j] = '\0';
	return (s);
}