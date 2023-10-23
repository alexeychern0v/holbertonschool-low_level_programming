#include "main.h"

/**
 * _strlen - find a string length
 *
 * @s: string to check
 *
 * return string length
 */
int _strlen(char *s)
{
	int length = 0;

	for (; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}
