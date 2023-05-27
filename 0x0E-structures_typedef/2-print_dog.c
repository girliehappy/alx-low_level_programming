#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - A function that prints a struct dog
 * @d: The struct dog to print
 * If an element of d is NULL, print (nil) instead of this element
 * (if name is NULL, print Name: (nil)), If d is NULL print nothing.
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);

}
