#include<stdio.h>
/**
 * main - Prints alphabet in lowercase then uppercase
 * Return: 0 (Success)
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
{
putchar('\n');
}
return (0);
}
