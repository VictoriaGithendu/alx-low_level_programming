#include<stdio.h>
/**
 * main - Prints alphabet in lowercase except q and e
 * Return: 0 (Success)
 */
int main(void)
{
int ch;
char ch = 'a';
while (ch <= 'z')
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
ch++
{
putchar('\n');
}
return (0);
}
