#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	if (a > 5)
	{
		printf("Last digit of %d is ", n);
		printf("%d and is greater than 5\n", a); }
	else if (a == 0)
	{
		printf("Last digit of %d is ", n);
		printf("%d and is 0\n", a); }
	else
	{
		printf("Last digit of %d is ", n);
		printf("%d and is less than 6 and not 0\n", a); }
	return (0);
}
