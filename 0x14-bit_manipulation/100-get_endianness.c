#include "main.h"
/**
 * get_endianness - Function that checks endianness
 * Return: 0 if big endian, 1 if little
 */
int get_endianness(void)
{
	unsigned int x = 0;
	char *c = (char *) &x;

	return (*c);
}
