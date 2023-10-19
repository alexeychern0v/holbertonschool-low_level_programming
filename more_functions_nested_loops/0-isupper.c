#include "main.h"

/**
 * _isupper - check if character is uppercase
 *
 * @c: character to check
 *
 * Return: 1 if character is uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 98)
	{
		return (1);
	}
	return (0);
}
