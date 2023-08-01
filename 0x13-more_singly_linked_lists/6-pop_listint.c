/*
 * File: 6-pop_listint.c
 * Auth: Nabil Mouhamech
 */

#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Return: If the linked list is empty - 0.
 *         otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *next;
	int i;

	if (*head == NULL)
		return (0);

	next = *head;
	i = (*head)->n;
	*head = (*head)->next;

	free(next);

	return (i);
}
