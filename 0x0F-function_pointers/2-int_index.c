#include "function_pointers.h"
/**
 * int_index - searches for an interger in an array
 * @array: pointer to array of integers
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element for which the cmp function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int index;
if (array == NULL || cmp == NULL)
	return (-1);

if (size <= 0)
	return (-1);

for (index = 0; index < size; index++)
{
	if (cmp(array[index]) != 0)
		return (index);
}

return (-1);
}
