#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to the node
 * @n: integer
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	n = new->n;
	*head = new->next;
	*head = new;
	return (new);
}
