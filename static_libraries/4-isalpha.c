#include "main.h"

/**
 * _isalpha - check if character is a letter
 *
 * @c: character to check
 *
 * Return: 1 if character is letter 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		if (c >= 91 && c <= 96)
			return (0);
		return (1);
	}
	return (0);
}
