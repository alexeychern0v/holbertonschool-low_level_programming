#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit = '0';
	char af = 'a';

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);
	for (af = 'a'; af <= 'f'; af++)
		putchar(af);
	putchar('\n');
	return (0);
}
