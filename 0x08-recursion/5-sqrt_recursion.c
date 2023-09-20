#include "main.h"

/**
 * funct - allows operation of _sqrt_recursion
 * @x: type int that define sqrt root
 * @y: type int that compares x
 * Return: sqrt int or -1 if not int
 */

int funct(int x, int y)
{
	int sqrt;

	sqrt = y * y;
	if (sqrt == x)
		return (y);
	else if (sqrt < x)
		return (funct(x, y + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find sqrt of
 *
 * Return: squareroot of n
 * -1 if n does not have a natural sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (funct(n, 0));
}
