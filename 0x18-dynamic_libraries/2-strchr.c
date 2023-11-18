#include "main.h"
/**
 * *_strchr - Locates a character in a string
 * @c: character to be locate
 * @s: string to be searched
 * Return: pointer to the first occurrence of c
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	return ('\0');
}
