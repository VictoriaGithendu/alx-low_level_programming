#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * listint_len - prints the number of elements in a linked list
 * @h: linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
