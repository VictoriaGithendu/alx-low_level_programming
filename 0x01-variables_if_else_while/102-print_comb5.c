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
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				putchar((y / 10) + 48);
				putchar((y % 10) + 48);
				if (x != 98 || j != 99)
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