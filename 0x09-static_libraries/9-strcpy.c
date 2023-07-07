#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * @dest: char string type
 * @src: char string type
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
int x = -1;

do {
x++;
dest[x] = src[x];
} while (src[x] != '\0');

return (dest);
}
