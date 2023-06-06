#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer.
 * returns the index of the first element for which the cmp function
 * does not return 0
 * @array: array
 * @size: is the number of elements in the array array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: If no element matches, return -1, If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int t;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (t = 0; t < size; t++)
	{
		if (cmp(array[t]))
			return (t);
	}
	return (-1);
}

