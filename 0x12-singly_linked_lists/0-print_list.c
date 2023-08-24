#include <stdio.h>
#include "lists.h"
/**
 * print_list -  that prints all the elements of a list_t list.
 * @h: head of the node
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
const list_t *temp = h;
int count = 0;
while (temp != NULL)
{
if (temp->str != NULL)
{
printf("[%d] %s\n", temp->len, temp->str);
}
else
{
printf("[0] (nil)\n");
}
count++;
temp = temp->next;
}
return (count);
}
