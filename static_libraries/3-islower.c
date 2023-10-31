#include "main.h"

/**
 * _islower - check if character is lowercase
 *
 * @c: character to check
 *
 * Return: 1 if character is lowercase 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
