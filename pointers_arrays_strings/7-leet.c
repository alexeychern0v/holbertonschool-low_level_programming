#include "main.h"
/**
 * leet - encode string to 1337
 *
 * @s: string to encode
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	char *r = s;
	char a[] = { 'a', 'e', 'o', 't', 'l' };
	char n[] = { 4, 3, 0, 7, 1 };
	int i = 0;
	int len = 0;

	while (s[len] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[len] == a[i] || s[len] == a[i] - 32)
				s[len] = n[i] + '0';
		}
		len++;
	}
	return (r);
}
