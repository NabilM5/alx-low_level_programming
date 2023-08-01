/*
 * File: 100-reverse_listint.c
 * Auth: Nabil Mouhamech
 */

#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of
 *        the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (NULL);


	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	(*head)->next = prev;

	return (*head);
}
