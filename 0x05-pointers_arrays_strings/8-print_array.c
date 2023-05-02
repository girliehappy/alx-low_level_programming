#include "main.h"
/**
 * print_array - A function that prints n elements of an array of integers
 * @a: the name of the array
 * @n: is the number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < (n - 1); z++)
	{
		printf("%d, ", a[z]);
	}
		if (z == (n - 1))
		{
		printf("%d", a[n - 1]);
		}
		printf("\n");
}
