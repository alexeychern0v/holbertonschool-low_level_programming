#include <stdio.h>
#include <stdlib.h>
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
	int mul;
	int a;
	int b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	printf("%d\n", mul);
	return (0);
}
