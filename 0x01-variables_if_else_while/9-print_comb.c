#include<stdio.h>
/**
 * main - Prints all possible combinations of single digits
 * Return: 0 (Success)
 */
int main(void)
{
int n;
for (n = 48; n < 58; n++)
{
if (n != 57)
putchar(n);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
