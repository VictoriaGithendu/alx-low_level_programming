#include "lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * find_listint_loop - finds loop in a linked list
 * @head: pointer to a linked list
 * Return: address of node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *fast = 0;
listint_t *slow = 0;

if (!head)
return (NULL);
while (slow && fast && fast->next)
{
fast = fast->next->next;
slow = slow->next->next;
if (fast == slow)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (fast);
}
}
return (NULL);
}
