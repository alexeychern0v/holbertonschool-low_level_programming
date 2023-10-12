#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int intType;
float floatType;
double doubleType;
char charType;
printf("Size of int: %ld byte(s)\n", sizeof(intType));
printf("Size of float: %ld byte(s)\n", sizeof(floatType));
printf("Size of double: %ld byte(s)\n", sizeof(doubleType));
printf("Size of char: %ld byte(s)\n", sizeof(charType));
return (0);
}
