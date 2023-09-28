#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int flag, x = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	for (x = 63; x >= 0; x--)
	{
		if ((n >> x) & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
	}
}
