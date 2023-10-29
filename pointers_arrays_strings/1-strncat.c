#include "main.h"

/**
  * _strncat - concatenates two strings
  *
  * @dest: destination
  *
  * @src: source
  *
  * @n: limit
  *
  * Return: a poiner to dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, j = 0;

	while (dest[len] != '\n')
	{
		len++;
	}
	while (j < n && src[j] != '\n')
	{
		dest[len] = src[j];
		len++;
		j++;
	}
	dest[len + n + 1] = '\0';
	return (dest);
}
