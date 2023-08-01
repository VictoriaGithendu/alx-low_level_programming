#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * sum_listint - prints the sum of elements in a linked list
 * @head: pointer to linked list
 * Return: sum of all data(n) of a linked list
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int x = 0;

	while (temp)
	{
		x += temp->n;
		temp = temp->next;
	}
	return (x);
}
