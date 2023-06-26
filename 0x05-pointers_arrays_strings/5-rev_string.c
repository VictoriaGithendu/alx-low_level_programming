#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: string
 * Return: 0
 */
void rev_string(char *s)
{
	int length, x, y;
	char tmp;

	for (length = 0; s[length] != '\0'; length++)
		x = 0;

	y = length / 2;

	while (y--)
	{
		tmp = s[length - x - 1];
		s[length - x - 1] = s[x];
		s[x] = tmp;
		x++;
	}
}
