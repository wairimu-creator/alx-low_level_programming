#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: pointer to string
 * @s2: pointer to string
 *
 * Return: pointer to newly allocated memory
 * which has s1, s2 and null byte (success)
 * or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
	char *res;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	res = malloc(sizeof(char) * (len1 + len2 + 1));
	if (res == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < len1)
		{
			res[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (len1 + len2))
		{
			res[i] = s2[j];
			i++;
			j++;
		}
	}
	res[i] = '\0';
	return (res);
}
