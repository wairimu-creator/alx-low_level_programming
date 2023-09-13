#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointing to the printing function
 */

#include <stdio.h>

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL) 
	{
		f(name);
	}
}
