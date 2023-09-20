#include "main.h"

/**
 * _print_rev_recursion - prints a string.
 * @s: string pointer
 *
 * Return: the string that will be printed
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
