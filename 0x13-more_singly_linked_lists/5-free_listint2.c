/*
 * File: 5-free_nodeint2.c
 * Auth: Nabil Mouhamech
 */

#include "lists.h"

/**
 * free_listint2 - Frees a linkint_t list and sets the head to NULL
 * @head: Pointer to the first node in the list
 */
void free_listint2(listint_t **head)
{
	listint_t *next;


	if (head == NULL)
		return;

	while (*head)
	{
		next = (*head)->next;
		free(*head);
		(*head) = next;
	}

	head = NULL;
}
