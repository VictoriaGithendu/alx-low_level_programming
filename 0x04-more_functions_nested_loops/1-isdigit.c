#include "main.h"
/**
 * _isdigit - Checks for a digit (0 to 9)
 * @c: The digit to be checke
 * Return: 1 if c is a digit otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
