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

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);

	print_dlistint(head);

	delete_dnodeint_at_index(&head, 2); /* delete node at index 2 */
	print_dlistint(head);

	delete_dnodeint_at_index(&head, 0); /* delete head node */
	print_dlistint(head);

	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}

