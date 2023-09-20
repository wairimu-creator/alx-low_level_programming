#include "main.h"
/**
 * _length - returns the length of the string
 * @s: the string
 * Return: the length of string
 */
int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}
/**
 * comparator - compares each character of the string
 * @s: string
 * @n1: smallest iterator
 * @n2: biggest iterator
 *
 * Return:
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is palindrome
 * @s: the string
 * Return: 1 if the string is a palindrome 
 * otherwise 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _length(s) - 1));
}
