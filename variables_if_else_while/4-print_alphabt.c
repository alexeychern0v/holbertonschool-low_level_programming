#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char az = 'a';

	for (az; az <= 'z'; az++)
	{
		if (az != 'e' & az != 'q')
			putchar(az);
	}
putchar('\n');
return (0);
}
