#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: byte amount to be used
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}

