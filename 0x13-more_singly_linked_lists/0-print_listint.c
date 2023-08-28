#include <stdio.h>
#include "lists.h"
/**
 * print_listint -  that prints all the elements of a listint_t list.
 * @h: head of the node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
const listint_t *temp = h;
int count = 0;
while (temp != NULL)
{
printf("%d\n", temp->n);
count++;
temp = temp->next;
}
return (count);
}
