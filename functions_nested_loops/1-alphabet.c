#include "main.h"
/**
 * print_alphabet - use of prototype
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char az = 'a';

	for (az = 'a'; az <= 'z'; az++)
		_putchar(az);
	_putchar('\n');
}
