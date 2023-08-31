#include "main.h"
/**
 * clear_bit - Function that sets bit value to 0 at an index
 * @index: index
 * @n: number pointer
 * Return: 1 on success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
