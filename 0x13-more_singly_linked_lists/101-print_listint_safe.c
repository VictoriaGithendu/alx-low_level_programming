#include "lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * print_listint_safe - prints a linked list
 * @head: pointer to a linked list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *temp;
	int x;
	size_t y = 0;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		x = *h - (*h)->next;
		if (x > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			y++;
		}
		else
		{
			free(*h);
			*h = NULL;
			y++;
			break;
		}
	}
	*h = NULL;
	return (y);
}
