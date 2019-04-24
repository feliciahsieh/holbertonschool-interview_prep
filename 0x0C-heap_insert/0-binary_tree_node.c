#include <stdio.h>
#include <stdlib.h>

#include "binary_trees.h"

/**
 * binary_tree_node - create a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;
	return (new);
}
