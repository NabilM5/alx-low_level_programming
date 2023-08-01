/*
 * File: 2-add_nodeint.c
 * Auth: Nabil Mouhamech
 */

#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list
 * @head: Pointer to the pointer of the first node in the list
 * @n: Value to be added to the new node
 *
 * Return: Pointer to the newly created node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
