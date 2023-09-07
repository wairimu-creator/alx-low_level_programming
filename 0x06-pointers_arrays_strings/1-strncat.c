#include "main.h"

/**
 * _strncat - concatenates n bytes from one string to another
 * @src: the source string
 * @dest: destination of the string
 * @n: number of bytes of string to concatenate
 *
 * Return: a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}

