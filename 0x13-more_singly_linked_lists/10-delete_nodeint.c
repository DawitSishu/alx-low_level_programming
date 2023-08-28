#include "lists.h"
/**
* delete_nodeint_at_index - deletes a node at a position
* @head: actual head of list
* @index: index in which the node is deleted
*
* Return: 1 if successfull, otherwise -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int pos = 0;
listint_t *tmp_next = *head;
listint_t *tmp_prev = NULL;
if (head == NULL || *head == NULL)
{
return (-1);
}
while (pos < index)
{
if (tmp_next == NULL)
{
return (-1);
}
tmp_prev = tmp_next;
tmp_next = tmp_next->next;
pos++;
}
if (index != 0)
{
tmp_prev->next = tmp_next->next;
free(tmp_next);
return (1);
}
else
{
*head = tmp_next->next;
free(tmp_next);
return (1);
}
}
