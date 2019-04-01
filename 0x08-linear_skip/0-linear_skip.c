#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "search.h"

/**
 * linear_skip - implement skip list with jump = sqrt of list size
 * @list: head of linked list to search in
 * @value: number to search for
 * Return: node of found value or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	int count = 0, listSize = 0, skipSize = 0, i = 0;
	skiplist_t *curr = list, *prev = list;

	if ((list == NULL) || (value < (list->n)))
		return (NULL);
	if ((list->n) == value)
		return (list);
	for (curr = list; curr != NULL; curr = curr->next)
		listSize++;
	skipSize = sqrt(listSize);
	curr = list->express;
	count += skipSize;
	while ((curr != NULL) && ((curr->n) < value) && (curr->express != NULL))
	{
		printf("Value checked at index [%d] = [%d]\n", count, curr->n);
		count += skipSize;
		prev = curr;
		curr = curr->express;
	}
	printf("Value checked at index [%d] = [%d]\n", count, curr->n);
	curr = prev;
	count -= skipSize;
	if (curr->express->n <= value)
	{
		i = listSize - 1;
		curr = curr->express;
		count += skipSize;
	}
	else
		i = count + skipSize;
	printf("Value found between indexes [%d] and [%d]\n", count, i);
	for (; (curr != NULL) && (curr->n <= value); count++)
	{
		printf("Value checked at index [%d] = [%d]\n", count, curr->n);
		if (curr->n == value)
			return (curr);
		curr = curr->next;
	}
	return (NULL);
}
