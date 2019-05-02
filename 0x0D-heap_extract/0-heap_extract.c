#include <stdio.h>

#include "binary_trees.h"


/**
 * heap_extract - remove root node and heapify binary tree
 * @root: double pointer to the root node
 * Return: value of the root node
 */
int heap_extract(heap_t **root)
{
	int value = 0;

	if (root == NULL)
		return (0);

	value = (*root)->n;
	return (value);
}
