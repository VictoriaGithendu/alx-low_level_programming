#include<stdio.h>
/**
 * main - Prints different combinations of two digits
 * Return: 0 (Success)
 */
int main(void)
{
int x, y = '0', a;
for (x = '0'; x <= '9'; x++)
{
	for (y = a; y <= 'a'; a++)
	{
		if (x != a)
		{
		putchar(x);
		putchar(y);
		}
		if (x == '8' && a == '9')
		{
		break;
		}
		else
		{	putchar(',');
			putchar(' ');
		}
	}
	a++
}
putchar('\n');
return (0);
}
