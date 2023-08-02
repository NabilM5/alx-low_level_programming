/*
 * File: 103-find_loop.c
 * Auth: Nabil Mouhamech
 */

#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slowly, *faster;

	if (head == NULL || head->next == NULL)
		return (NULL);

	slowly = head->next;
	faster = (head->next)->next;

	while (faster)
	{
		if (slowly == faster)
		{
			slowly = head;

			while (slowly != faster)
			{
				slowly = slowly->next;
				faster = faster->next;
			}

			return (slowly);
		}

		slowly = slowly->next;
		faster = (faster->next)->next;
	}

	return (NULL);
}
