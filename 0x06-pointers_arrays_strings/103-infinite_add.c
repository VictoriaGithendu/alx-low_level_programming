#include "main.h"
#include<stdio.h>
/**
 * *infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer pointer
 * @size_r: buffer size
 * Return: pointer to dest
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x = 0, y = 0, op, bg, dr1, dr2, add = 0;

	while (*(n1 + x) != '\0')
		x++;
	while (*(n2 + y) != '\0')
		y++;
	if (x >= y)
		bg = x;
	else
		bg = y;
	if (size_r <= bg + 1)
		return (0);
	r[bg + 1] = '\0';
	x--, y--, size_r--;
	dr1 = *(n1 + x) - 48, dr2 = *(n2 + y) - 48;
		while (bg >= 0)
		{
			op = dr1 + dr2 + add;
			if (op >= 10)
				add = op / 10;
			else
				add = 0;
			if (op > 0)
				*(r + bg) = (op % 10) + 48;
			else
				*(r + bg) = '0';
			if (x > 0)
				x--, dr1 = *(n1 + x) - 48;
			else
				dr1 = 0;
			if (y > 0)
				y--, dr2 = *(n2 + y) - 48;
			else
				dr2 = 0;
			bg--, size_r--;
		}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
