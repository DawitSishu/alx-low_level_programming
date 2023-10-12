#include "lists.h"
/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
* @head: header of dlistint_t linked list.
* @index: index of the node, starting from 0
* Return: a address of nth node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *tempo;
unsigned int i;
tempo = head;
if (tempo != NULL)
{
while (tempo->prev != NULL)
{
tempo = tempo->prev;
}
for (i = 0; (i < index) && (tempo != NULL); i++)
{
tempo = tempo->next;
}
return (tempo);
}
else
return (NULL);
}
