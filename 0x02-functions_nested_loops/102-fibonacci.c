#include<stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int z;
	unsigned long x = 0, y = 1, sum;

	for (z = 0; z <= 49; z++)
	{
		sum = x + y;
		printf("%ld", sum);

		x = y;
		y = sum;

		if (z == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}


