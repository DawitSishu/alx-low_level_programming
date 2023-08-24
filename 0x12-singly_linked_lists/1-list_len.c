#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: head of the node
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
int count = 0;
const list_t *temp = h;
while (temp != NULL)
{
count++;
temp = temp->next;
}
return (count);
}
