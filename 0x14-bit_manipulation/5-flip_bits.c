#include "main.h"
/**
 * flip_bits - function that returns the no of bits to flip
 * @n: first number
 * @m: second number
 * Return: no of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int current;
	unsigned long int exclusive = n ^ m;
	int x, flag = 0;

	for (x = 63; x >= 0; x--)
	{
		current = exclusive >> x;
		if (current & 1)
			flag++;
	}
	return (flag);
}
