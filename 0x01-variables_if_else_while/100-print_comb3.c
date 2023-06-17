#include<stdio.h>
/**
 * main - Prints different combinations of two digits
 * Return: 0 (Success)
 */
int main(void)
{
int x, y;
for (x = 48; x <= 56; x++)
{
	for (y = 49; y <= 57; y++)
	{
		if (y > x)
			putchar(x);
		putchar(y);
		if (y != 56 && x != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
