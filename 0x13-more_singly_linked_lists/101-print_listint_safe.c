#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * looped_listint_len - checks unique codes
 * @head: pointer to linked list
 * Return: nodes number
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;

	size_t = 1;

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
 * print_listint_safe - prints a linked list
 * @head: pointer to linked list
 * Return: node number
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
