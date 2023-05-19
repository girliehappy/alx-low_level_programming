#include <stdlib.h>
#include "main.h"

/**
 * *array_range - A function that creates an array of integers
 * @min: The minimum range of values stored
 * @max: The maximum range of values stored and number of elements
 * Return: The pointer of the new array
 */
int *array_range(int min, int max)
{
	int *p;
	int t, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);
	for (t = 0; min <= max; t++)
		p[t] = min++;
	return (p);
}
