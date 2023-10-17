#include "main.h"
/**
 *print_alphabet_x10 - use of prototype 
 */
void print_alphabet_x10(void)
{
	int k = 1;
	char az = 'a';

	while (k <= 10)
	{
		for (az = 'a'; az <= 'z'; az++)
			_putchar(az);
		_putchar('\n');
		k++;
	}
}
