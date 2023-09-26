#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc, exit(98) if it fails
 * @b:number of bytes of mempry to alocate
 * Return - pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
