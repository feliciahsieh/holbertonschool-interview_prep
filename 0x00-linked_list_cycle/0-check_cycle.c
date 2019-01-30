#include <stdio.h>
#include <stdlib.h>

#include "lists.h"

/**
 * check_cycle - using Hoare's algorithm, check for cycle in linked list
 * @list: singly-linked list of elements
 * Return: 0 if no cycle. 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *tortoise = NULL, *rabbit = NULL;

	if (!list)
		return (0);
	if (list->next == NULL)
		return (0);

	tortoise = list;
	rabbit = list->next;

	while ((rabbit != NULL) && (rabbit != tortoise))
	{
		tortoise = tortoise->next;
		if (rabbit->next && rabbit->next->next)
			rabbit = rabbit->next->next;
		else
			return (0);
	}

	if (tortoise == rabbit)
		return (1);
	else
		return (0);
}
