#include "main.h"
/**
 * print_alphabet_x10 - Lowercase alphabets
 * Return: void
 */
void print_alphabet_x10(void)
{
	char ch;
	int x = 0;

	while (x < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
			}
		_putchar('\n');
		x++;
	}
}
