#include "main.h"
/**
 * _isupper - Prints uppercase
 * @c: The character to be checked
 * Return:  1 if uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
