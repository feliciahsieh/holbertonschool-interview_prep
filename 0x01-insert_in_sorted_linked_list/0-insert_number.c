#include <stdio.h>
#include <stdlib.h>

#include "lists.h"

/**
 * insert_node - insert a number into a sorted singly-linked list
 * @head: pointer to head of list
 * @number: value to insert into singly-linked list
 * Return: address of the new node or NULL if no node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current = *head, *prev = NULL;
	listint_t *new = NULL;

	/* create new node */
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
	new->next = NULL;

	/* empty list */
	if (*head == NULL)
	{
		*head = new;
	} else
	{ /* at least 1 element */
		while ((current != NULL) && ((current->n) < number))
		{
			prev = current;
			current = current->next;
		}

		if (prev == NULL)
		{ /* new beginning node */
			new->next = *head;
			*head = new;
		} else if (current)
		{
			/* new middle node */
			prev->next = new;
			new->next = current;
		} else
		{
			/* new end node */
			prev->next = new;
		}
	}

	return (new);
}
