#include<stdio.h>
/**
 * main - Prints alphabet in lowercase in reverse
 * Return: 0 (Success)
 */
int main(void)
{
int ch;
for (ch = 'z'; ch >= 'a'; ch--)
putchar(ch);
putchar('\n');
return (0);
}
