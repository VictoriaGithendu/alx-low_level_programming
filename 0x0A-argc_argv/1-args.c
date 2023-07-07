#include <stdio.h>
/**
 * main - prints the number of arguements
 * @argc: no of arguements
 * @argv: array of arguements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
