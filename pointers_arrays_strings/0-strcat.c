#include "main.h"

/**
 * _strcpy -  copy a string
 *
 * @dest: destinations
 *
 * @src: source
 *
 * Return:  pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int j;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (j = 0; src[j] != '\0'; j++; len++)
	{
		dest[len] = src [j];
	}
	dest[len] = '\0';
	return (*dest);
}
