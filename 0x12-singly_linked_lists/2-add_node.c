#include "lists.h"
#include<string.h>
#include<stdlib.h>
/**
 * add_node - adds a new node at the beginning of the list
 * @head: double pointer
 * @str: string to add
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t new;
	unsigned int length = 0;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->length = length;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
