#include <stdio.h>
#include <stdlib.h>

#include "binary_trees.h"

avl_t *leftRotate(avl_t *x)
{
	avl_t *y = x->right;
	avl_t *T2 = y->left;

	/* Perform rotation */
	y->left = x;
	x->right = T2;
	x->parent = y;

	/* Return new root */
	return y;
}

avl_t *quick(avl_t *avl, int array[], size_t n, size_t low, size_t high)
{
	size_t mid = (low + high) / 2;

	low = low;
	high = high;
	mid = mid;
	n = n;

	avl = insert(avl, array[mid], low, high);
	avl = quick(avl, array, n, low, mid - 1);
	avl = insert(avl, array[mid], low, high);
	avl = quick(avl, array, n, mid + 1, high);

	return (avl);
}

avl_t *insert(avl_t *node, int n)
{
	avl_t *curr = NULL;
	int mid = 0;

	mid = mid;
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

avl_t *sorted_array_to_avl(int array[], size_t size)
{
	avl_t *avl = NULL;
	avl_t *curr = NULL;
	size_t i = 0;
	size_t mid = 0;

	i = i;
	mid = mid;
	curr = curr;
	if ((array == NULL) || (size == 0))
		return (NULL);

	avl = quick(avl, array, 0, size-1);

	/*
	for (i = 0; i < size; i++)
	{
		printf("Inserting #i: %d\n", i);
		index = getIndex(0, size);
		avl = insert(avl, array[index]);
	}
	*/

	/*curr = avl;
	for (i = 0; i < size-4; i++)
		;
	avl = leftRotate(curr);
	*/

	return (avl);
}
