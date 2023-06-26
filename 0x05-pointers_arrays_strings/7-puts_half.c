#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
 * Return: 0
 */
void puts_half(char *str)
{
	int x, y;

	x = 0;
	while (str[x] != '\0')
		x++;

	y = x / 2;
	if (x % 2 == 1)
		y++;

	while (y < x)
	{
		_putchar(str[y]);
		y++;
	}
	_putchar('\n');
}
