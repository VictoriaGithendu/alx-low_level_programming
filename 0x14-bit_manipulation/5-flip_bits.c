#include<stdio.h>
#include "main.h"
/**
 * flip_bits - returns no of bit to flip
 * @n: integer
 * @m: integer
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned long int z;
	int x, y =  0;

	for (x = 63; x >= 0; x--)
	{
		z = result >> x;
		if (z & 1)
			y++;
	}
	return (y);
}
