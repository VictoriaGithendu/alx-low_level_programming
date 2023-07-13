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
	int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = y = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;

	z = malloc(sizeof(char) * (x + y + 1));

	if (z == NULL)
		return (NULL);
	x = y = 0;
	while (s1[x] != '\0')
	{
		z[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		z[x] = s2[y];
		x++;
		y++;
	}
	z[x] = '\0';
	return (z);
}
