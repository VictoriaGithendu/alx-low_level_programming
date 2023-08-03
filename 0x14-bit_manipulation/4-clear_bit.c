#include "main.h"
#include<stdio.h>
/**
 * clear_bit - sets the value of a bot to 0
 * @n: pointer
 * @index: index
 * Return: 1 if success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
