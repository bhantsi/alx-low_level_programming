#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;
	dlistint_t *node;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	print_dlistint(head);

	node = insert_dnodeint_at_index(&head, 2, 98); /* insert 98 at index 2 */
	print_dlistint(head);
	printf("Inserted node: %d\n", node->n);

	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}

