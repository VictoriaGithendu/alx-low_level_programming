#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * free_listint - frees a list
 * @head: pointer to a linked list
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
