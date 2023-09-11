#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: a pointer to the new dog, or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy;
	char *owner_copy;

    /* Allocate memory for the dog structure */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return NULL;

    /* Allocate memory for name and owner */
	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL)
	
		free(new_dog);
		return NULL;

	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
	
		free(name_copy);
		free(new_dog);
		return NULL;
	

    /* Copy the name and owner strings into the allocated memory */
	strcpy(name_copy, name);
	strcpy(owner_copy, owner);

    /* Set the dog's properties */
	
		new_dog->name = name_copy;
		new_dog->age = age;
		new_dog->owner = owner_copy;
	
	return new_dog;
	
}
void free_dog(dog_t *dog)
{
	if (dog != NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
	}
}
#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure to represent a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */



