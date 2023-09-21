#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string if success
 * NULL if Errror
 */

char *_strdup(char *str)
{
	char *res;
	int i = 0, j;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	i++;
	res = malloc(i * sizeof(char));
	if (res == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
	{
		res[j] = str[j];
	}
	return (res);
}
