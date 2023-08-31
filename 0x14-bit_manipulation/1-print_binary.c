#include "main.h"
/**
 * print_binary - Function that prints binary representation of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int count = 0;
	int x = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (x = 63; x >= 0; x--)
	{
		unsigned long int current = n >> x;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
}
