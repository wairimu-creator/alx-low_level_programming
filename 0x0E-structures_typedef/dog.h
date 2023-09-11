#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog data
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 * description: defines metadata about the dog and type of dog's structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
