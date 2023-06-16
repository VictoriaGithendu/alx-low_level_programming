#include<stdio.h>
/**
 * main - Prints all possible combinations of single digits
 * Return: 0 (Success)
 */
int main(void)
{
int n;
for (n = 13; n < 23; n++)
{
if (n !=22)
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
