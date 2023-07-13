#include "main.h"
#include<stdlib.h>
/**
 * *_memset - fills memory with constant byte
 * @s: memory area
 * @b: character
 * @n: no of times to copy
 * Return: pointer to memory
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
/**
 * *_calloc - allocates memory of an array
 * @nmemb: no of array elements
 * @size: element size
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);
	return (p);
}
