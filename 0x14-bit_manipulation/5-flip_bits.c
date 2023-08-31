#include "main.h"
/**
 * flip_bits - Function that returns the bit number to flip
 * @n: First number
 * @m: Second number
 * Return: bit number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusive = n ^ m;
	unsigned long int current;
	int x = 0;
	int count = 0;

	for (x = 63; x >= 0; x--)
	{
		current = exclusive >> x;
		if (current & 1)
			count++;
	}
	return (count);
}
