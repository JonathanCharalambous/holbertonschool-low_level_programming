#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"


/**
 * free_grid- frees the memory allocated for a 2d grid
 * @grid: the grid we want to free
 * @height: height of the grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
