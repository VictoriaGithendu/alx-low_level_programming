#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * get_nodeint_at_index - prints the nth node of a list
 * @head: pointer to a linked list
 * @index: node index
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int x = 0;

	while (temp && x < index)
	{
		temp = temp->next;
		x++;
	}
	return (temp ? temp : NULL);
}
