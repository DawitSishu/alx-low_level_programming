#include "lists.h"
/**
* free_dlistint - frees a dlistint_t list.
* @head: header of dlistint_t list.
* Return: nothing
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *temporary;
if (head != NULL)
{
while (head->prev != NULL)
head = head->prev;

while (head != NULL)
{
temporary = head->next;
free(head);
head = temporary;
}
}
}
