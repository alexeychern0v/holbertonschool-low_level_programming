#include <stdio.h>
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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
