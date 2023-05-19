#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * of integers.
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int f, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);
	for (f = 0; f < height; f++)
	{
		p[f] = malloc(sizeof(int) * width);
		if (p[f] == NULL)
		{
		for (; f >= 0; f--)
			free(p[f]);
		free(p);
		return (NULL);
	}
	}
		for (f = 0; f < height; f++)
	{
		for (y = 0; y < width; y++)
			p[f][y] = 0;
	}
	return (p);
}

