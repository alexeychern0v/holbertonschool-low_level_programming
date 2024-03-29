#include "main.h"
/**
 * _memcpy - copy a memory area
 *
 * @dest: destination
 *
 * @src: source
 *
 * @n: number of bytes
 *
 * Return: pointer to copied bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
