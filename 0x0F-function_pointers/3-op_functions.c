#include "3-calc.h"
/**
 * op_add - function to find sum of two integers
 * @a: first number
 * @b: second number
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function to find difference of two integers
 * @a: first number
 * @b: second number
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function to find product of two integers
 * @a: first number
 * @b: second number
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that find the division of two integers
 * @a: first number
 * @b: second integer
 * Return: division
 */
int op_div(int a, int b)
{
	int x;

	x = (a / b);

	return (x);
}
/**
 * op_mod - function that finds the remainder
 * @a: first number
 * @b: second number
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
