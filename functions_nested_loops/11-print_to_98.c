#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = -10;

	if (n <= 98)
	{
	    for (n ; n < 99; n++)
	    {
		    if (n < 0)
		    {
		        putchar ('-');
		        putchar ((n * -1) % 10 + '0');
		    }
		    else if (n < -9)
		    {
		        putchar('-');
		        putchar((n * -1) / 10 + '0');
		        putchar ((n * -1) % 10 + '0');
		        
		    }
		    
		    else if (n < 10)
		    {
		        putchar (n % 10 + '0');
		        putchar(',');
			    putchar(' ');
		    }
		    else
		    {
		        putchar(n / 10 + '0');
		        putchar (n % 10 + '0');
		    }  
		    if (n != 98)
		    {
			        putchar(',');
			        putchar(' ');
		    }
		}
	}


	if (n > 99)
	{
	    for (n; n >= 98; n--)
	    {
	        if (n >= 100)
	        {
	            putchar(n / 100 + '0');
	            putchar((n % 100) / 10 + '0' );
	            putchar(n % 10 + '0');
	        }
	        else
	        {
	            putchar(n / 10 + '0');
	            putchar (n % 10 + '0');
	        }
	        if (n != 98)
	        {
	           putchar(',');
	           putchar(' ');
	        }
        }
	}
	putchar('\n');
	return (0);
}
