#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @x: input
 * Return: 0
 */
char *leet(char *x)
{
	int y, z;

	char s1[] = "aAeEoOtTIL";
	char s2[] = "4433007711";

	for (y = 0; x[y] != '\0'; y++)
	{
		for (z = 0; z < 10; z++)
		{
			if (x[y] == s1[z])
			{
				x[y] = s2[z];
			}
		}
	}
	return (x);

}
