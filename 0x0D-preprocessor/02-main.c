#include <stdio.h>

/**
 * main - print the name of the file it was compiled from
 * Return: 0 if success
**/
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
