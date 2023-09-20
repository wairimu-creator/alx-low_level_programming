#include "main.h"
#include <stdio.h>

/**
 * funct_prime - allows operation of _sqrt_recursion
 * @y: int oprator
 * @x: type int
 *
 * Return: sqrt int or -1 if not an int
 */

int funct_prime(int x, int y)
{
	if ((y * y) == x || x < 0)
		return (0);
	else if ((y * y) > x)
		return (1);
	else 
		return (funct_prime(x, (y + 1)));
}

/**
 * is_prime_number - checks if number is prime or not
 * @n: number to be checked type int
 * Return: 1 if number is prime integer
 * 0 if number is not a prime number integer
 */

int is_prime_number(int n)
{
	return (funct_prime(n, 0));
}
