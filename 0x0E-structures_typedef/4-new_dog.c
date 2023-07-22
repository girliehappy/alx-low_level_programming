#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * n_strlen - A function that returns the length of a string
 * @s: The string to evaluate
 * Return: The length of the string
 */
int n_strlen(char *s)
{
	int p = 0;

	while (s[p] != '\0')
	{
		p++;
	}
	return (p);
}

/**
 * n_strcpy - A function that copies the string pointed to by src
 * It will include the terminating nule byte (\0) too
 * to the buffer that is been pointed to by dest
 * @dest: Dis the pointer to the buffer in which the string will be copied from
 * @src: The string to be copied from
 * Return: the pointer to dest
 */
char *n_strcpy(char *dest, char *src)
{
	int length, t;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (t = 0; t < length; t++)
	{
		dest[t] = src[t];
	}
	dest[t] = '\0';

	return (dest);
}

/**
 * new_dog - A function that creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Return: A pointer to the new dog (Success), otherwise, NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int lent1, lent2;

	lent1 = n_strlen(name);
	lent2 = n_strlen(owner);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc(sizeof(char) * (lent1 + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(sizeof(char) * (lent2 + 1));
	if (ndog->owner == NULL)
	{
		free(ndog);
		free(ndog->name);
		return (NULL);
	}
	n_strcpy(ndog->name, name);
	n_strcpy(ndog->owner, owner);
	ndog->age = age;

	return (ndog);
}
