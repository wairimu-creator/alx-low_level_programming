#include "main.h"

/**
 * checking for a digit between 0 - 9
 * @d: int to be checked
 * Return: 1 if its a digit otherwise return 0
*/

int _isdigit(int d)
{
	if (d >= '0' && d <= '9')
	{
	return (1);
	}
	return (0);
}
