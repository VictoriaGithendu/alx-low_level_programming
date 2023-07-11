#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * _strdup - returns pointer to a new memory allocate space
 * @str: - string
 * Return: 0
 */
char *_strdup(char *str)
{
	char *res;
	int x, y;

	x = 0;
	if (str == NULL)
		return (NULL);

	while (str[x] != '\0')
		x++;

	res = malloc(sizeof(char) * (x + 1));

			if (res == NULL)
			return (NULL);

			for (y = 0; str[y]; y++)
			res[y] = str[y];

			return (res);
}
