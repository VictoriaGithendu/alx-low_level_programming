#include<stdio.h>
/**
 * main - Prints different combinations of two digits
 * Return: 0 (Success)
 */
int main(void)
{
int x, y;
for (x = 18; x <= 26; x++)
{
	for (y = 19; y <= 27; y++)
	{
		if (y > x)
			putchar(x);
		putchar(y);
		if (y != 26 || x != 27)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
