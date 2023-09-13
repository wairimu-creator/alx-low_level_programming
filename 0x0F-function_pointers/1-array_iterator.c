#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @size: the size of the array
 * @array: array of the integers
 * @action: pointer to the fuction being used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
