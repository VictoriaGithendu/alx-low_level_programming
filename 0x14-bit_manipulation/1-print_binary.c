#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int bit_count = 0;
	unsigned long int mask = 1;

	mask <<= (sizeof(unsigned long int) * 8 - 1);

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			bit_count++;
		}
		else if (bit_count > 0 || mask == 1)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
	if (bit_count == 0)
		_putchar('0');
}
