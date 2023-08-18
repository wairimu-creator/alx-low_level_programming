#include "main.h"

/**
 * a function that prints numbers 0 - 9 
 * followed by a new line
*/
void print_numbers(void)
{
	int p;

	for (p = 0; p < 10; p++)
	{
	_putchar (p + '0');
	}
	_putchhar ('\n');
}
