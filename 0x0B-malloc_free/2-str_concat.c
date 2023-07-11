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
	int x, y, lenx, leny, len;

	lenx = leny = 0;

	if (s1 != NULL)
	{
		x = 0;
		while (s1[x] != '\0')
			lenx++, x++;
	}
	if (s2 != NULL)
	{
		y = 0;
		while (s2[y] != '\0')
			leny++, y++;
	}
	len = lenx + leny;
	z =(char *)malloc(sizeof(char) * (len + 1));
	if (z == NULL)
		return (NULL);

	for (x = 0; x < lenx; x++)
		z[x] = s1[x];
	for (y = 0; y < leny; y++)
		z[y] = s2[y];
	z[len] = '\0';
	return (z);
}
