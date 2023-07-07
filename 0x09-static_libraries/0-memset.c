#include "main.h"
/**
 * *_memset - fills memory with constant byte
 * @s: nmemory area to be filled
 * @b: character
 * @n: number of times to copy b
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;

for (x = 0; x < n; x++)
{
s[x] = b;
}
return (s);
}
