#include "main.h"
/**
 * *cap_string - capitalize all words
 * @x: the input
 * Return: pointer to string
 */
char *cap_string(char *x)
{
	int count;

	count = 0;

	while (x[count] != '\0')
	{
		while (x[count] >= 97 && x[count] <= 122)
			count++;

		if (x[count - 1] == ' ' || x[count - 1] == '\t' || x[count - 1] == '\n'
				|| x[count - 1] == ',' || x[count - 1] == ';' || x[count - 1] == '.' ||
				x[count - 1] == '!' || x[count - 1] == '?' || x[count - 1] == '"' ||
				x[count - 1] == '(' || x[count - 1] == ')' ||
				x[count - 1] == '{' || x[count - 1] == '}' || count == 0)
			x[count] -= 32;
		count++;
	}
	return (x);
}
