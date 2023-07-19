#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - A function that executes a function given as a parameter
 * on each element of an array
 * @array: The array
 * @size: The size of the array
 * @action: THe pointer to function to be used
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int e;

	if (array == NULL || action == NULL)
		return;

	for (e = 0; e < size; e++)
	{
		action(array[e]);
	}
}
