#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: grid to be freed
 * @height: grid height
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
