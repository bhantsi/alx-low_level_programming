#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current = head;
const listint_t *checker = head;
size_t count = 0;

while (current != NULL)
{
printf("[%p] %d\n", (void *)current, current->n);

count++;
checker = checker->next;

if (checker != NULL)
checker = checker->next;
if (checker == current)
{
printf("-> [%p] %d\n", (void *)current->next, current->next->n);
exit(98);
}
current = current->next;
}

return (count);
}

