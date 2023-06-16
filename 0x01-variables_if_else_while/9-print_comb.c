#include<stdio.h>
/**
 * main - Prints all possible combinations of single digits
 * Return: 0 (Success)
 */
int main(void)
{
int n;
for (n = 25; n < 35; n++)
putchar(n);
if (n != 34)
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
