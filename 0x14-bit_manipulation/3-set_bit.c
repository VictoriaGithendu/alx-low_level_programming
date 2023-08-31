#include "main.h"
/**
 * set_bit - Function that sets bit value to 1 at an index
 * @index: index
 * @n: number pointer
 * Return: 1 success or -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
