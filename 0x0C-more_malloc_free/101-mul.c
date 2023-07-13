#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * is_digit - checks if string is a digit
 * @s: string
 * Return: 0
 */
int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}
/**
 * _strlen - returns string length
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
 * errors - handles main errors
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: no of arguements
 * @argv: array of arguements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *x, *y;
	int lenx, leny, len, a, carry, digitx, digity, *result, b = 0;

	x = argv[1], y = argv[2];
	if (argc != 3 || !is_digit(x) || !is_digit(y))
		errors();
	lenx = _strlen(x);
	leny = _strlen(y);
	len = lenx + leny + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (a = 0; a <= lenx + leny; a++)
		result[a] = 0;
	for (lenx = lenx - 1; lenx >= 0; lenx--)
	{
		digitx = x[lenx] - '0';
		carry = 0;
		for (leny = _strlen(y) - 1; leny >= 0; leny--)
		{
			digity = y[leny] - '0';
			carry += result[lenx + leny + 1] + (digitx * digity);
			result[lenx + leny + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[lenx + leny + 1] += carry;
	}
	for (a = 0; a < len - 1; a++)
	{
		if (result[a])
			b = 1;
		if (b)
			_putchar(result[a] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
