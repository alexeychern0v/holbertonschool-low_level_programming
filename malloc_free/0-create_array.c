#include "main.h"
/**
  *create_array - creates an array of chars
  *
  *@size: the size of the array
  *
  *@c: the char to fill
  *
  *Return: The array filled
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
