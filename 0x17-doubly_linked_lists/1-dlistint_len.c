#include "lists.h"

/**
* dlistint_len - get number of elements in a linked dlistint_t list.
* @h: header of double linked list
* Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t i = 0;
int num = 0;

for (i = 0; h != NULL; i++)
{
if (h->prev != NULL && num == 0)
{
h = h->prev;
continue;
}
else if (h->prev == NULL)
{
num = 1;
i = 0;
}
h = h->next;
}
return (i);
}
