#include "lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * delete_nodeint_at_index - deletes node at index index
 * @head: pointer to linked list
 * @index: node index to be deleted
 * Return: 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *temp = *head;
	listint_t *current = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (x < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		x++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
