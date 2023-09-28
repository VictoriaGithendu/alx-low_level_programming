#include "main.h"
/**
 * clear_bit - function that sets the bit value to 0
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
