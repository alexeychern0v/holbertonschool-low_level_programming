#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name of function
 * @name : name of function
 * @f: pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == 0 || f == 0)
		return;
	f(name);
}
