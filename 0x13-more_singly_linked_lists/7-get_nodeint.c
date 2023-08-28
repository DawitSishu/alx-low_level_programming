#include "lists.h"
/**
* get_nodeint_at_index - removes first elt from list
* @head: pointer to head of list
* @index: index of node starting from 0
*
* Return: NULL if node not found, otherwise pointer to node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int pos = 0;
listint_t *tmp = head;
if (head == NULL)
{
return (NULL);
}
while (tmp != NULL)
{
if (pos == index)
{
return (tmp);
}
tmp = tmp->next;
pos++;
}
return (NULL);
}
