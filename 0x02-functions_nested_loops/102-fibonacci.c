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

	printf("%d, %d, ", x, y);

	for (x = 3; x <= 50; x++)
	z = x + y;
	printf("%d", z);

	if (x < 50)
	{
		printf(", ");
	}
		x = y;
		y = z;
	}
	return (0);
}


