#include "main.h"

/**
 * _issuper - checks for uppercase character
 * @c: the character that is being checked
 *
 * Return: 1 if c is uppercase, otherwise it is 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	return (0);

}
