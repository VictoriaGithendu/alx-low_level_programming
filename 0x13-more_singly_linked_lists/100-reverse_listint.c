#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * reverse_listint - prints the reverse of a linked list
 * @head: pointer to linked list
 * Return: pointer to the reverse list first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *prev = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
