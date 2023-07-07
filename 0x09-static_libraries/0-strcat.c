#include "main.h"
/**
 * *_strcat - Function that concentrates two strings
 * @dest: destination string pointer
 * @src:source string pointer
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
int length_of_string, x;

length_of_string = 0;

while (dest[length_of_string] != '\0')
{
length_of_string++;
}
for (x = 0; src[x] != '\0'; x++, length_of_string++)
{
dest[length_of_string] = src[x];
}
dest[length_of_string] = '\0';
return (dest);
}
