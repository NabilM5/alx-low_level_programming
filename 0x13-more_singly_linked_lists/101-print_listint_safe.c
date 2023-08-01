#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;

	while (current != NULL)

	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		if (current <= current->next)
		{
			printf("[%p] %d\n", (void *)current->next, current->next->n);
			break;
		}

		current = current->next;
	}

	return (count);
}
