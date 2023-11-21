#include "lists.h"

/**
 * sum_listint - computes the sum of all the elements in a listint_t list
 * @head: pointer to the head of the list
 *
 * Return: sum of all the elements in the list, or 0 if the list is empty
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

