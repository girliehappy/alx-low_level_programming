#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - A function that initialize a variable of type struct dog
 * @d: The pointer to the struct dog to initialize
 * @name: The name of the struct dog to initialize
 * @age: The age opf the struct dog to initialize
 * @owner: The owner of the dog
 * Return: 0;
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
}
