#include "main.h"
#include<stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: minimun no
 * @max: maximum no
 * Return: pointer to new created array
 */
int *array_range(int min, int max)
{
	int *p;
	int x, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		p[x] = min++;
	return (p);
}
