#include <stdio.h>
#include <stdlib.h>

#include "binary_trees.h"

avl_t *leftRotate(avl_t *x)
{
	avl_t *y = x->right;
	//avl_t *T2 = y->left;

	/* Perform rotation */
	y->left = x;
	x->right = NULL;
	x->parent = y;

	/* Return new root */
	return y;
}

avl_t *insert(avl_t *node, int n)
{
	avl_t *curr = NULL;

	curr = curr;
	if (node == NULL)
	{
	        node = malloc(sizeof(binary_tree_t));
		node->left = NULL;
		node->right = NULL;
		node->n = n;
		return (node);
	} else
	{
		if (n < (node->n))
		{
			curr = NULL;
			if (node->left == NULL)
				curr = node;
			node->left = insert(node->left, n);
			if (curr != NULL)
			{
				node->left->parent = curr;
				curr = NULL;
			}
		}
		else
		{
			curr = NULL;
			if (node->right == NULL)
				curr = node;
			node->right = insert(node->right, n);
			if (curr != NULL)
			{
				node->right->parent = curr;
				curr = NULL;
			}
		}
	}

	return(node);
}

avl_t *sorted_array_to_avl(int *array, size_t size)
{
	avl_t *avl = NULL;
	avl_t *curr = NULL;
	unsigned int i = 0;

	curr = curr;
	if ((array == NULL) || (size == 0))
		return (NULL);

	for (i = 0; i < size; i++)
	{
		avl = insert(avl, array[i]);
	}

	return (avl);
}
