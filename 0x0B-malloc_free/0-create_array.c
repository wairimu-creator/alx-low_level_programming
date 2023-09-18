#include "main.h"
#include <stdlib.h>

/**
 * main -  creates an array of chars initializes it with a specific char
 * @size: size of the array
 * @c: character
 * Return: a p;ointer to the array or null
*/
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{		
			array[i] = c;
		}
	}
	
	return (array);
}
