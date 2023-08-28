#include "lists.h"
/**
* free_listint2 - frees a listint_t  and set hed to NULL.
* @head: actual head of list
*
*/
void free_listint2(listint_t **head)
{
listint_t *temp;
while (*head != NULL && head != NULL)
{
temp = *head;
free(temp);
*head = (*head)->next;
}
}
