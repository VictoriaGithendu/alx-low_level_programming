#include<stdio.h>
/**
 * main - prints all multiples of 3 and 5 below 1024
 * Return: 0 (success)
 */
int main(void)
{
	int x, y;

	for (x = 1; x < 1024; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
			y += x;
	}
	printf("%d\n", y);
	return (0);
}
