#include<stdio.h>
/**
 * main - Prints all base 10 single digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
int n;
for (n = 0; n < 10; n++)
putchar((n % 10) + '0');
putchar('\n');
return (0);
}
