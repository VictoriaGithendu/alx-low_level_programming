#include<stdio.h>
/**
 * main - Prints all possible combinations of single digits
 * Return: 0 (Success)
 */
int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
if (n != 9)
putchar(n);
putchar(',');
putchar(' ');
putchar('\n');
}
return (0);
}
