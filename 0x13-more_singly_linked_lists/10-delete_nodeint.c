#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *temp;
unsigned int i;

if (!head || !*head)
return (-1);

if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}

current = *head;
for (i = 0; i < index - 1 && current; i++)
current = current->next;

if (!current || !current->next)
return (-1);

temp = current->next;
current->next = temp->next;
free(temp);

return (1);
}

