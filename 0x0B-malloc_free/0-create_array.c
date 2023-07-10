#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the given array
 * @c: The eharacter you assign
 * Return: NULL if size = 0
 * a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int p;

	string = malloc(sizeof(char) * size);
	if (size == 0 || string == NULL)
		return (NULL);

	for (p = 0; p < size; p++)
		string[p] = c;
	return (string);
}
