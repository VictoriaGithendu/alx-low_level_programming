#include<stdio.h>
/***
 * main - prints the first 50 fibonacci numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int x = 1;
	int y = 2;
	int z;

	printf("%d\n%d\n", x, y);

	for ( x = 3; x <= 50; x++)
	{
		z = x + y;
		printf("%d\n", z);
	
		x = y;
		y = z;
	}
	return (0);
}


