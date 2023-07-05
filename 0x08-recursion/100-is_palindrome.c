#include "main.h"
int check_pal(char *s, int i, int length);
int _strlen_recursion(char *s);
/**
 * is_palindrome - checks if string is palindrome
 * @s: string
 * Return: 1 if true, 0 if false
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns length of a string
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks if is palindrome
 * @s: string
 * @i: iterator
 * @length: string length
 * Return: 1 if palindrome 0 otherwise
 */
int check_pal(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (check_pal(s, i + 1, length - 1));
}
