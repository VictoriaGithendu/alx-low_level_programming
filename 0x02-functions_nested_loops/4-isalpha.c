#include "main.h"
/**
 * _isalpha - Checks lowercase and uppercase
 * @c: The character to be checked
 * Return: 1 for lowercase or uppercase and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c = 'a' && c <= 'z') || (c = 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
