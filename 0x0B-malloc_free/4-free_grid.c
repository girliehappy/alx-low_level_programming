#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - A function that frees a 2 dimensional grid
 * @grid: The 2 dimentional grid
 * @height: The dimentional height of the grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int t;

	for (t = 0; t < height; t++)
	{
		free(grid[t]);
	}
	free(grid);
}
