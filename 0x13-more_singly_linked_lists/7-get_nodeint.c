#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node, starting at 0.
 *
 * Return: If the node does not exist, return NULL. Otherwise, return the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *current;

current = head;
for (i = 0; current != NULL && i < index; i++)
{
current = current->next;
}

return (current);
}

