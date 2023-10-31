#include "main.h"

/**
  * _strncpy - concatenates two strings
  *
  * @dest: destination
  *
  * @src: source
  *
  * @n: limit
  *
  * Return: a poiner to dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0, j = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	j = len;
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
