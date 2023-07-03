#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @n: no of bytes
 * @src: bytes from memory area
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
