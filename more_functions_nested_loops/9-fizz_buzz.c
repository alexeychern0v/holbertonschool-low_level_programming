#include <stdio.h>
/**
 * main - start function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k = 0;

	for (k = 0; k < 101; k++)
	{
		if (k % 3 == 0 && k % 5 == 0 && k != 0)
		{
			printf("FizzBuzz ");
		}
		else if (k % 3 == 0 && k != 0)
		{
			printf("Fizz ");
		}
		else if (k % 5 == 0 && k != 0)
		{
			printf("Buzz");
			if (k != 100)
			{
				printf(", ");
			}
		}
		else
		{
			printf("%d ", k);
		}
	}
	printf("\n");
	return (0);
}
