#include "lists.h"

/**
* print_dlistint - print elements and number of nodes in list
* @h: header of double linked list
*
* Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
size_t i = 0;
int nums = 0;
for (i = 0; h != NULL; i++)
{
if (h->prev != NULL && nums == 0)
{
h = h->prev;
continue;
}
else if (h->prev == NULL)
{
nums = 1;
i = 0;
}
printf("%i\n", h->n);
h = h->next;
}
return (i);
}
