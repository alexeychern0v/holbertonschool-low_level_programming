#include "main.h"
/**
 * _memset - fill memory with a byte
 * 
 * @s: memory area
 *
 * @b: byte
 *
 * @n: number of bytes
 *
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
