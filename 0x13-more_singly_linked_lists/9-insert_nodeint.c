#include "lists.h"
/**
* sum_listint - sums all the lists' data
* @head: actual head of list
* @idx: index in which the node is added
* @n: the number to be added onthe index
*
* Return: 0 if empty, otherwise sum of all n of lists
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *node = malloc(sizeof(listint_t));
unsigned pos = 0;
listint_t *tmp_next = *head;
listint_t *tmp_prev = NULL;
if (node == NULL || head == NULL || *head == NULL)
{
return (NULL);
}
while (pos < idx)
{
if (tmp_next == NULL)
{
free(node);
return (NULL);
}
tmp_prev = tmp_next;
tmp_next = tmp_next->next;
pos++;
}
node->n = n;
node->next = tmp_next;
if (idx == 0)
{
*head = node;
}
else
{
tmp_prev->next = node;
}
return (node);
}
