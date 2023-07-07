#include <stdio.h>
/**
 * main - prints all arguements
 * @argc: no of arguements
 * @argv: array of arguements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
