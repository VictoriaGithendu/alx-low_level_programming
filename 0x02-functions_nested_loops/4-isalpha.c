#include "main.h"
/**
 * _isalpha - Checks lowercase and uppercase
 * @c: The character to be checked
 * Return: 1 for lowercase or uppercase and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c = 97 && c <= 122) || (c = 65 && c <= 90))
	{
		return (1);
	}
		return (0);
}
