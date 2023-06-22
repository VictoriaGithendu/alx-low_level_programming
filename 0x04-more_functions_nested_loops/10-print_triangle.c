#include "main.h"
/**
 * print_triangle - Prints a triangle followed by a new line
 * @size: The size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (x = 1; x <= size; x++)
	{
		for (y = x; y < size; y++)
		{
			_putchar(' ');
		}
		for (y = 1; y <= x; y++)
		{
		_putchar('\n');
		}
	}
}
