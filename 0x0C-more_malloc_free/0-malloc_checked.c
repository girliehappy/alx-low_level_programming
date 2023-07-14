#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: The number of bytes to allocate
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptam;

	ptam = malloc(b);
	if (ptam == NULL)
		exit(98);
	return (ptam);
}
