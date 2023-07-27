#include "lists.h"
#include<stdlib.h>
/**
 * free_list - free a list
 * @head: list to be freed
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *head;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
