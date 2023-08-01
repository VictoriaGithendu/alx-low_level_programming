#include "lists.h"
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
/**
 * free_listint_safe - frees a list
 * @h: pointer to linked list
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t x;
	int y;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		y = *h - (*h)->next;
		if (y > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			x++;
		}
		else
		{
			free(*h);
			*h = NULL;
			x++;
			break;
		}
	}
	*h = NULL;
	return (x);
}
