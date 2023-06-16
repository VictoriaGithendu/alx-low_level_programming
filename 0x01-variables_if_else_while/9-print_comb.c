#include<stdio.h>
/**
 * main - Prints all possible combinations of single digits
 * Return: 0 (Success)
 */
int main(void)
{
int n;
for (n = 3; n < 13; n++)
putchar(n);
if (n != 12)
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
