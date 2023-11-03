#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - print received args
 *
 * @argc: The number of arguments supplied to the program
 *
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 is successful
 *
 */

int main(int argc, char *argv[])
{
	int len;
	unsigned int k;
	int sum;
	char *add;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (len = 1; len < argc; len++)
		{
			add = argv[len];
			for (k = 0; k < strlen(add); k++)
			{
				if (add[k] < '0' || add[k] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[len]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
