#include <stdio.h>

/**
 * Write a function that takes a pointer to an int as parameter and
 * updates the value it points to to 98
 * @n: an integer pointer
 * Return: 0
*/
void reset_to_98(int *n)
{
	*n = 98;
}
