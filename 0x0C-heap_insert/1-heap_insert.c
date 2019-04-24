#include <stdio.h>

#include "binary_trees.h"

/**
 * countNodes - count num of nodes
 * @node: double pointer to the node node of the Heap
 * Return: number of nodes
 */
unsigned int countNodes(binary_tree_t *node)
{
	unsigned int count = 1;

	if (node == NULL)
		return (0);

	if (node->left != NULL)
		count += countNodes(node->left);
	if (node->right != NULL)
		count += countNodes(node->right);

	return (count);
}

/**
 * insertLeaf - insert new Leaf
 * @r: root of max heap tree
 * @value: value of new leaf
 * Return: pointer to leaf
 */
heap_t *insertLeaf(heap_t *r, int value)
{
	heap_t *q[100] = {NULL}, *leaf = NULL;
	int i = 0, tailIndex = 0;

	q[0] = r;
	while (q[i] != NULL)
	{
		if (q[i]->left == NULL)
		{
			leaf = binary_tree_node(q[i], value);
			q[i]->left = leaf;
			break;
		}
		else
			q[++tailIndex] = q[i]->left;

		if (q[i]->right == NULL)
		{
			leaf = binary_tree_node(q[i], value);
			q[i]->right = leaf;
			break;
		}
		else
			q[++tailIndex] = q[i]->right;
		i++;
	}
	return (leaf);
}


/**
 * heap_insert - inserts a value into a Max Binary Heap
 * @root: double pointer to the root node of the Heap
 * @value: value to put in the new node
 * Return: pointer to the inserted node or NULL if failed
 */
heap_t *heap_insert(heap_t **root, int value)
{
	binary_tree_t *leaf = NULL, *tempNode = NULL;
	int temp = 0;

	if ((root == NULL) || (*root == NULL))
	{
		leaf = binary_tree_node(*root, value);
		*root = leaf;
		return (leaf);
	}

	/* find leaf and insert */
	leaf = insertLeaf(*root, value);
	tempNode = leaf;

	/* compare to parent, swap if necessary while traveling to root */
	while ((leaf != NULL) && (leaf->parent != NULL))
	{
		if (leaf->parent->n < leaf->n)
		{
			temp = leaf->parent->n;
			leaf->parent->n = leaf->n;
			leaf->n = temp;
			tempNode = tempNode->parent;
		}
		leaf = leaf->parent;
	}
	return (tempNode);
}
