#include "main.h"
#include<stdlib.h>
/**
 * alloc_grid - returns a pointer to a two dimeensional array of integers
 * @width: array width
 * @height: array height
 * Return: pointer to two dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int x, y;

	if (height <= 0 || width <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		array[x] = malloc(sizeof(int) * width);
		if (array[x] == NULL)
		{
			for (; x >= 0; x--)
				free(array[x]);
			free(array);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			array[x][y] = 0;
	}
	return (array);
}
