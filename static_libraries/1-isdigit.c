#include "main.h"

/**
 * _isdigit - check if character is number
 *
 * @c: character to check
 *
 * Return: 1 if character is lowercase 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
