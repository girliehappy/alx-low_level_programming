#include "main.h"
/**
 * reverse_array - A function that reverses the content of an array of integers
 * @a: The array
 * @n: The numbers of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int p;
	int b;

	for (p = 0; p < n--; p++)
	{
		b = a[p];
		a[p] = a[n];
		a[n] = b;
	}
}
