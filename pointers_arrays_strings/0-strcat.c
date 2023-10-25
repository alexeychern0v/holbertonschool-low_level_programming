#include "main.h"

/**
 * _strcat -  concatenate two strings
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
	int j = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[j] != '\0')
	{
		dest[len] = src[j];
		j++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
