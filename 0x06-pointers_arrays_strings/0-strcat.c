#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @src: the string to be concatenated
 * @dest: the string with concatenate
 * Return: Always 0
*/

char *_strcat(char *dest, char *src)
{
	int lengthD, lengthS;

	lengthD = 0;
	lengthS = 0;

	while (*(dest + lengthD) != '\0')
		lengthD++;

	while (*(src + lengthS) != '\0' && lengthD < 97)
	{
		*(dest + lengthD) = *(src + lengthS);
		lengthD++;
		lengthS++;

	}
	*(dest + lengthD) = '\0';
	return (dest);
}
