#include <stdio.h>
#include <stdlib.h>

#include "search.h"

/**
 * linear_skip - implement skip list with jump = sqrt of list size
 * @list: head of linked list to search in
 * @value: number to search for
 * Return: node of found value or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	int listSize = 0;
	size_t i = 0;
	skiplist_t *curr = list, *prev = NULL;

	if ((list == NULL) || (value < (list->n)))
		return (NULL);
	if ((list->n) == value)
		return (list);
	for (curr = list; curr != NULL; curr = curr->next)
		listSize++;
	curr = list;
	while ((curr != NULL) && ((curr->n) < value) && (curr->express != NULL))
	{
		prev = curr;
		curr = curr->express;
		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
	}
	if (curr->n <= value)
		curr = prev;
	if (curr->express == NULL)
	{
		curr = NULL;
		i = listSize - 1;
	}
	else
		i = curr->express->index;
	printf("Value found between indexes [%lu] and [%lu]\n", curr->index, i);
	for (; (curr != NULL) && (curr->n <= value); curr = curr->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
		if (curr->n == value)
			return (curr);
	}
	return (NULL);
}
