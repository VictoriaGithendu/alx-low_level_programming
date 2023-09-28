#include "main.h"
/**
 * get_bit - function that returns the bit value
 * @index: index
 * @n: number to search
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);
	bit_value = (n >> index) & 1;
	return (bit_value);
}
