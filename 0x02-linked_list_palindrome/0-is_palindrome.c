#include <stdio.h>

#include "lists.h"

/**
 * is_palindrome - check if singly linked list is a palindrome
 * @head: points to head of singly linked list
 * Return: 0 if not a palindrome. 1 if it is. An empty list
 * is a palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *curr;
	int a[5002];
	int count = 0, mid = 0, i = 0;

	if ((head == NULL) || (*head == NULL) || ((*head)->next == NULL))
		return (1);

	curr = *head;
	while (curr)
	{
		a[count] = curr->n;
		curr = curr->next;
		count++;
	}

	mid = count / 2;
	for (i = 0; i < mid; i++)
	{
		if (a[i] != a[count - i - 1])
			return (0);
	}
	if (i == mid)
		return (1);

	return (0);
}
