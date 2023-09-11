#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of struct dog
 * @d: name that points to the struct dog
 * @name: name of dog in struct
 * @age: age of dog in struct
 * @owner: pointer to a char for owner of the dog
 * Return: NULL
**/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		;
	}
	else
	{
		d->age = age;
		d->name = name;
		d->owner = owner;
	}
}
