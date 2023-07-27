#include "lists.h"
#include<stdio.h>
/**
 * print_list - prints all elements of a list
 * @h: pointer
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %x\n", h->len, h->str);
		h = h->next;
		x++;
	}
	return (x);
}
