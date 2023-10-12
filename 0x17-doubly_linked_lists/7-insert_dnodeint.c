#include "lists.h"

/**
* insert_dnodeint_at_index - that inserts a new node at a given position.
* @h: header of double linked list
* @idx: index of the node, starting from 0
* @n: is a given number
* Return: a address of nth node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *final_node, *temp_node = *h;
unsigned int i;

final_node = malloc(sizeof(dlistint_t));
if (final_node == NULL)
return (NULL);
final_node->n = n;
while (temp_node != NULL && temp_node->prev != NULL)
{
temp_node = temp_node->prev;
*h = (*h)->prev;
}
if (idx == 0)
{
free(final_node);
return (add_dnodeint(h, n));
}
for (i = 0; (i < idx - 1) && temp_node != NULL; i++)
temp_node = temp_node->next;
if (temp_node == NULL)
{
free(final_node);
return (NULL);
}
if (temp_node->next == NULL)
{
final_node->next = NULL;
final_node->prev = temp_node;
temp_node->next = final_node;
}
else
{
final_node->next = temp_node->next;
final_node->prev = temp_node;
temp_node->next->prev = final_node;
temp_node->next = final_node;
}
return (final_node);
}
