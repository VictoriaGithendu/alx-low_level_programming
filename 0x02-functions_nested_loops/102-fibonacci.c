#include<stdio.h>
/***
 * main - prints the first 50 fibonacci numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	long int x, y, z;

	x = 1
	y = 2

	printf("%ld", "%ld", x, y);

	for (n = 0; n < 48; n++)
	{
		z = x + y;
		printf(", %ld", z);
		x = y
		y = z
	}
	printf('\n');
	return (0);
}

