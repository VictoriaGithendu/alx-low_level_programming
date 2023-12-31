#include "3-calc.h"
#include "function_pointers.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints the results of operations
 * @argc: no of arguements
 * @argv: array of arguements
 * Return: 0
 */
int main(__attribute__((__unused__))int argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
