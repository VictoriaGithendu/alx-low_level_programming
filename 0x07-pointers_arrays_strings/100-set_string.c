#include "main.h"
/**
 * set_string - set the value of a pointer to a character
 * @s: pointer to pointer
 * @to: pointer character
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
