/*
 * File: 4-free_nodeint.c
 * Auth: Nabil Mouhamech
 */

#include "lists.h"

/**
 * free_listint - Frees a linkint_t list
 * @head: Pointer to the first node in the list
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
