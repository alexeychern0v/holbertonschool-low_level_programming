#include "main.h"

char *_strdup(char *str)
{
	int size = 0;
	int i;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}
	a = malloc((size) * sizeof(char) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		a[i] = str[i];
	}
	a[i] = '\0';
	return (a);
}
