#include "lists.h"
/**
* sum_listint - sums all the lists' data
* @head: actual head of list
*
* Return: 0 if empty, otherwise sum of all n of lists
*/
int sum_listint(listint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
