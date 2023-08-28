#include "lists.h"
/**
* free_listint2 - frees a listint_t  and set hed to NULL.
* @head: actual head of list
*
*/
void free_listint2(listint_t *head)
{
while (head != NULL)
{
free(head);
head = head->next;
}
*head = NULL;
}
