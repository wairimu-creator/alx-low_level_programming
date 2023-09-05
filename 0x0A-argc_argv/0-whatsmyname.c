#include <stdio.h>
#include "main.h"

/**
 * print the name of the program
 * argv: the array of arguments
 * argc: the count of arguments
 * Retrun: 0 (success)
**/

int main(int argc __attribute__((unused)),char *argv[])
{
	printf("%s\n", argv[0]);

		return (0);
}
