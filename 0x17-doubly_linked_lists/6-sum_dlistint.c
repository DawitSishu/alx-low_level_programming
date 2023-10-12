#include "lists.h"
/**
* sum_dlistint - returns the sum of all the data(n) of a dlistint_t linked list
* @head: header of dlistint_t linked list.
* Return: the sum of all nodes
*/

int sum_dlistint(dlistint_t *head)
{
dlistint_t *temp_node;
int result = 0;

temp_node = head;
if (temp_node != NULL)
{
while (temp_node->prev != NULL)
temp_node = temp_node->prev;

while (temp_node != NULL)
{
result += temp_node->n;
temp_node = temp_node->next;
}
return (result);
}
else
return (0);
}
