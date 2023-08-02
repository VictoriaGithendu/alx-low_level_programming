#include "lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * find_listint_loop - finds loop in a linked list
 * @head: pointer to a linked list
 * Return: address of node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *start = head;
	listint_t *end = head;

	if (!head)
		return (NULL);
	while (start && end && end->next)
	{
		end = end->next->next;
		start = start->next;
		if (start == end)
		{
			start = head;
			while (start != end)
			{
				start = start->next;
				end = end->next;
			}
			return (end);
		}
	}
	return (NULL);
}
