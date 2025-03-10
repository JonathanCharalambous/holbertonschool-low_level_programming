#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"


/**
 * alloc_grid- creates a grid of numbers using a 2d array
 * @width: width of the grid
 * @height: height of the grid
 * Return: the grid filled with 0s
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int *data = malloc(width * height * sizeof(int));
	int **grid = malloc(width * sizeof(int *));

	if (grid == NULL || data == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
		grid[i] = data + i * height;

	return (grid);
}
