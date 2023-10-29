#include "main.h"
/**
 * _strcmp - Compares pointers to two strings.
 *
 * @s1: A pointer to the string
 *
 * @s2: A pointer to the string
 *
 * Return: r the result
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
