#include "main.h"
/**
 * binary_to_uint - function that converts binary to unsigned integer
 * @b: string pointer of 0 and 1 characters
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int index = 0;
	int x;

	if (!b)
		return (0);
	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		index = 2 * index + (b[x] - '0');
	}
	return (index);
}
