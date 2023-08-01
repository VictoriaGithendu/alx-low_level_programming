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
	listint_t *fast = 0;
	listint_t *slow = 0;

	if (!head)
		return (NULL);
	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}
	return (NULL);
}
