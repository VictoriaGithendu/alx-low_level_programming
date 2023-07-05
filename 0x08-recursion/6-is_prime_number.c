#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number - returns prime number
 * @n: number
 * Return: prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - returns prime number
 * @n: number
 * @i: iterator
 * Return: prime number
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
