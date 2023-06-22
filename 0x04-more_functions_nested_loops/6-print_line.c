#include "main.h"
/**
 * print_line - prints a straight line
 * @n: the number of times the character_ should be printed
 * Return: void
 */
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
