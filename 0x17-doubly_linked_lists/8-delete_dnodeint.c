#include "lists.h"

/**
* delete_dnodeint_at_index -deletes the node atindex of a dlistint_t list.
* @head: header of double linked list
* @index: index of the node, starting from 0
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *previous_node, *Temp_node = *head;
unsigned int i;

while (Temp_node != NULL && Temp_node->prev != NULL)
{
Temp_node = Temp_node->prev;
*head = (*head)->prev;
}
if (Temp_node != NULL && index != 0)
{
for (i = 0; i < index && Temp_node != NULL; i++)
{
previous_node = Temp_node;
Temp_node = Temp_node->next;
}
if (Temp_node != NULL)
{
previous_node->next = Temp_node->next;
if (previous_node->next != NULL)
Temp_node->next->prev = previous_node;
free(Temp_node);
return (1);
}
return (-1);
}
if (Temp_node != NULL && index == 0)
{
previous_node = Temp_node->next;
if (previous_node == NULL)
*head = NULL;
else
{
previous_node->prev = NULL;
free(Temp_node);
*head = previous_node;
}
return (1);
}
return (-1);
}
