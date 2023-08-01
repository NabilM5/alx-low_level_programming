/*
 * File: 3-add_nodeint_end.c
 * Auth: Nabil Mouhamech
 */

#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list
 * @head: Pointer to the pointer of the first node in the list
 * @n: Value to be added to the new node
 *
 * Return: Pointer to the newly created node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}

	return (new_node);
}
