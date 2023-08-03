#include "main.h"
#include<stdio.h>
/**
 * binary_to_uint - function that convertes binary to unsigned integer
 * @b: string pointer
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int num;

	if (!b)
		return (0);
	for (num = 0; b[num]; num++)
	{
		if (b[num] < '0' || b[num] > 1)
			return (0);
		result = 2 * result + (b[num] - '0');
	}
	return (result);
}
