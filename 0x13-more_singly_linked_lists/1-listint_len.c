#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: head of the node
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
int count = 0;
const listint_t *temp = h;
while (temp != NULL)
{
count++;
temp = temp->next;
}
return (count);
}
