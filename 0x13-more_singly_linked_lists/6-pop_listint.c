#include "lists.h"
/**
* free_listint2 - removes first elt from list
* @head: actual head of list
*
* Return: 0 if empty, otherwise data of the elt removed
*/
int pop_listint(listint_t **head)
{
int val = 0;
listint_t *tmp;
if (*head == NULL || head == NULL)
{
return (val);
}
tmp = *head;
val = tmp->n;
*head = (*head)->next;
free(tmp);

return (val);
}
