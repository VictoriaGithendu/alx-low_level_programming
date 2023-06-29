#include "main.h"
#include<stdio.h>
/**
 * *rot13 - encodes using rot13
 * @x: pointer to string
 * Return: x
 */
char *rot13(char *x)
{
	int y;
	int z;

	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxtzabcdefghijklm";

	for (y = 0; x[y] != '\0'; y++)
	{
		for (z = 0; z < 52; z++)
		{
			if (x[y] == data1[z])
			{
				x[y] = datarot[z];
				break;
			}
		}
	}
	return (x);
}
