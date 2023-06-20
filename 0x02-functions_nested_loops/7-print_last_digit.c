#include "main.h"
/**
 * print_last_digit - Print last digit
 * @x: The number to be checked
 * Return: 0 (Success)
 */
int print_last_digit(int x)
{
	int y;

	y = (x % 10);

	if (y < 0)
	{
		y = y * -1;
	}
	_putchar(y + '0');
	return (y);
}
