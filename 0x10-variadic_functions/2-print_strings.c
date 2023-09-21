#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings 
 * @n: number of strings
 * @separator: string to be printed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list strings;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("n/");
	va_end(strings);
}	
