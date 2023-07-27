#include "main.h"
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
	list_t x;
	unsigned int y = 0;

	new = malloc(sizeof(list_t));
	if (!x)
		return (NULL);
	x->str = strdup(str);
	x->y = y;
	x->next = (*head);
	(*head) = x;

	return (*head);
}
