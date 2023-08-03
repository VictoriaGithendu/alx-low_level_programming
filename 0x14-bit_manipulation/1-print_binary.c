#include "main.h"
#include<stdio.h>
/**
 * print_binary - prints binary
 * @n: integer
 * Return: binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int result;
	int num, count = 0;

	for (num = 63; num >= 0; num--)
	{
		result = n >> num;
		if (result & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
