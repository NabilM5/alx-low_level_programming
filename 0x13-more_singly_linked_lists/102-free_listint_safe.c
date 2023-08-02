/*
 * File: 102-free_listint_end.c
 * Auth: Nabil Mouhamech
 */

#include "lists.h"

/**
 * looped_listint_count - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *slowly, *faster;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slowly = head->next;
	faster = (head->next)->next;

	while (faster)
	{
		if (slowly == faster)
		{
			slowly = head;
			while (slowly != faster)
			{
				nodes++;
				slowly = slowly->next;
				faster = faster->next;
			}

			slowly = slowly->next;
			while (slowly != faster)
			{
				nodes++;
				slowly = slowly->next;
			}

			return (nodes);
		}

		slowly = slowly->next;
		faster = (faster->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safely (ie.
 *                     can free lists containing loops)
 * @h: A pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			next = (*h)->next;
			free(*h);
			*h = next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			next = (*h)->next;
			free(*h);
			*h = next;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
