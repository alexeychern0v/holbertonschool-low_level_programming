#include <stdio.h>
/**
 * main - Entry point
 *
 *@n: natural number
 *
 * Return: Always 0 (Success)
 */
int main()
{
    int n = 98;
    if (n < 98)
    {
        for (; n < 99; n++)
                {
                    printf("%d", n);
                    if (n != 98)
                    {
                        printf(", ");
                    }
                }
    }
    
    else if (n > 98)
    {
        for (; n > 97; n--)
        {
            printf("%d", n);
            if (n != 98)
            {
                printf(", ");
            }
            
        }
    }
    else
    {
        printf("98");
    }
    return (0);
}
