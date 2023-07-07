#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts string to integer
 * @s: string
 * Return: string
 */
int _atoi(char *s)
{
	int x, y, z, length, a, digit;

	x = 0;
	y = 0;
	z = 0;
	length = 0;
	a = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;

	while (x < length && a == 0)
	{
		if (s[x] == '-')
			++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (y % 2)
				digit = -digit;
			z = z * 10 + digit;
			a = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			a = 0;
		}
		x++;
	}
	if (a == 0)
		return (0);

	return (z);
}
/**
 * main - multiplies two numbers
 * @argc: no of arguements
 * @argv: array of arguements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
	return (1);
	}
num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);

result = num1 *num2;

printf("%d\n", result);

return (0);
}
