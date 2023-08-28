#include "lists.h"
/**
* free_listint - frees a listint_t list.
* @head: head address of the list
*
*/
void free_listint(listint_t *head)
{
while (*head != NULL)
{
*head = (*head)->next;
free(temp);
}
*head = NULL; 
}
