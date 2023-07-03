#include "main.h"
/**
 * _strspn - length of prefix substring
 * @s: string
 * @accept: prefix to be measured
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				bytes++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
