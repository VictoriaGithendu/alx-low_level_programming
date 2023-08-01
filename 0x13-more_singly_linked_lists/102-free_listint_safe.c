#include "lists.h"
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
/**
 * looped_listint_count - counts the number of nodes
 * @head: pointer to list
 * Return: 0
 */
size_t looped_listint_count(const listint_t *head)
{
	size_t nodes = 1;
	const listint_t *tortoise, *hare;

	if (head == NULL || head->next == NULL)
		return (0);
	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
				nodes++;
			}
			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				nodes++;
			}
			return (nodes);
		}
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	return (0);
}
/**
 * free_listint_safe - frees a list
 * @h: pointer to linked list
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	int y;
	listint_t *temp;
	size_t x = 0;

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
