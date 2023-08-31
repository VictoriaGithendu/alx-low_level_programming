#include "main.h"
/**
 * binary_to_uint - Function that converts binary number to unsigned int
 * @b: binary number string
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_val = 0;

	if (!b)
		return (0);
	for (; *b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		dec_val = (dec_val << 1) | (*b - '0');
	}
	return (dec_val);
}
