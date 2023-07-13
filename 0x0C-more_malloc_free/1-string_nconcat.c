#include "main.h"
#include<stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: no of bytes
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	unsigned int x = 0, y =  0, lenx = 0, leny = 0;

	while (s1 && s1[lenx])
		lenx++;
	while (s2 && s2[leny])
		leny++;

	if (n < leny)
		s = malloc(sizeof(char) * (lenx + n + 1));
	else
		s = malloc(sizeof(char) * (lenx + leny + 1));

	if (!s)
		return (NULL);

	while (x < lenx)
	{
		s[x] = s1[x];
		x++;
	}
	while (n < leny && x < (lenx + n))
		s[x++] = s2[y++];

	while (n >= leny && x < (lenx + leny))
		s[x++] = s2[y++];

	s[x] = '\0';
	return (s);
}
