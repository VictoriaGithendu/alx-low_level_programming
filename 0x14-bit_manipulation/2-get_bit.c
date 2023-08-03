#include "main.h"
#include<stdio.h>
/**
 * get_bit - returns the value of a bit
 * @n: integer
 * @index: bit index
 * Return: bit value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	if (index > 63)
		return (-1);
	result = (n >> index) & 1;
	return (result);
}
