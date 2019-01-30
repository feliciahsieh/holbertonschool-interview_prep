#include <stdio.h>
#include <stdlib.h>

#include "lists.h"

/**
 * check_cycle - using Hoare's algorithm, check for cycle in linked list
 * @list: singly-linked list of elements
 * Return: 0 if no cycle
 *         1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *tortoise = NULL;
	listint_t *rabbit = NULL;
	int step = 2;

	printf("Hello \n");
	printf("1: %p\n", *list);

	print("2: %p\n", (void *)list);
	print("3: %p\n", *list);
	print("4: %p\n", (void *) *list);

	if (!list || (((void *)list) == NULL))
		return (0);

	*tortoise = *list;
	*rabbit = *list;

	printf("Starting...\n");

	while ((tortoise != rabbit) && (rabbit != NULL))
	{
		printf("tortoise: %p  rabbit: %p\n", (void *)tortoise, (void *)rabbit);
		tortoise = tortoise + 1;
		rabbit = rabbit + step;
	}

	if (tortoise == rabbit)
		return (1);

	return (0);
}
