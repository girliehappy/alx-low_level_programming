#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills the memory with a constant byte
 * @s: The memory area to be filled
 * @b: The character to copy
 * @n: The number of times to copy b
 * Return: The pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int f;

	for (f = 0; f < n; f++)
	{
		s[f] = b;
	}
	return (s);
}

/**
 * *_calloc - A function that allocates memory for an array, using malloc
 * @nmemb: The number of elements in the array
 * @size: The size of each element
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}
