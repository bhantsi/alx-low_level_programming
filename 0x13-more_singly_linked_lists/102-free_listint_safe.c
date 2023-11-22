#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: A pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *temp;
size_t count = 0;

if (h == NULL || *h == NULL)
return (0);

current = *h;

while (current != NULL)
{
temp = current;
current = current->next;

free(temp);

count++;
if (temp->next == *h)
break;
}

*h = NULL;

return (count);
}

