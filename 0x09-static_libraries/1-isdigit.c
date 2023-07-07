#include "main.h"
/**
 * _isdigit - Checks for a digit (0 to 9)
 * @c: The digit to be checke
 * Return: 1 if c is a digit otherwise 0
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
