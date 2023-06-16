#include<stdio.h>
/**
 * main - Prints alphabet in lowercase except q and e
 * Return: 0 (Success)
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
while (ch != 'e' && ch != 'q')
{
putchar(ch);
}
{
putchar('\n');
}
return (0);
}
