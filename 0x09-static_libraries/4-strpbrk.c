#include "main.h"
/**
 * *_strpbrk - searches for a string in any set of bytes
 * @s: string
 * @accept: bytes to be searched
 * Return: pointer to bytes
 */
char *_strpbrk(char *s, char *accept)
{
int x;

while (*s)
{
for (x = 0; accept[x]; x++)
{
if (*s == accept[x])
return (s);
}
s++;
}
return ('\0');
}
