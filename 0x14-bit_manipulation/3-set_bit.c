#include "main.h"
#include<stdio.h>
/**
 * set_bit - sets the bit value to 1
 * @index: index
 * @n: pointer
 * Return: 1 if success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
