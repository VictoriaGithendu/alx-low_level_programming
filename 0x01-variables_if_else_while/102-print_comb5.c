#include<stdio.h>
/**
 * main - Prints combinations of two two digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 100; x++)
	{
		for (y = 0; y < 100; y++)
		{
			if (x < y)
			{
				putchar(0 + x / 10);
				putchar(0 + x % 10);
				putchar(0 + y / 10);
				putchar(0 + y % 10);
				if (x == 98 || y == 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
