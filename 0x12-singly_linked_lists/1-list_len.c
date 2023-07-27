#include "lists.h"
#include<stdlib.h>
/**
 * list_len - returns the number ofelemnts in a linked list
 * @h: pointer to the list
 * Return: no of elements
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
