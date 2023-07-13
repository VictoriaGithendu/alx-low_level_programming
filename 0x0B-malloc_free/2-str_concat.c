#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * str_concat - contenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *z;
	int x, y, lenx, leny;

	while (s1 && s1[lenx])
		lenx++;
	while (s2 && s2[leny])
		leny++;

	z = malloc(sizeof(char) * (lenx + leny + 1));
	if (z == NULL)
		return (NULL);

	x = 0;
	y = 0;

	if (s1)
	{
		while (x < lenx)
		{
			z[x] = s1[x];
			x++;
		}
	}
	if (s2)
	{
		while (x < (lenx + leny))
		{
			z[x] = s2[y];
			x++;
			y++;
		}
	}
	z[x] = '\0';
	return (z);
}
