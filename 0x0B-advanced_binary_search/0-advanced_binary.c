#include <stdio.h>
#include <stdlib.h>

/**
  * print_tree - print binary tree represented as an array
  * @array: pointer to the first element of the array to search in
  * @left: left index to check in array
  * @right: right index to check in array
  * Return: N/A
  */
void print_tree(int *array, size_t left, size_t right)
{
	size_t i;

	if (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
			printf("%d ", array[i]);
		printf("\n");
	}
}

/**
  * binary_search - return index of value in sorted array
  * @array: pointer to the first element of the array to search in
  * @l: left index
  * @r: right index
  * @value: value to search for
  * Return: index of occurence or -1 if not
  */
int binary_search(int *array, size_t l, size_t r, int value)
{
	if (r >= l)
	{
		int mid = l + (r - l) / 2;

		/* If the value == mid, check left subarray */
		if (array[mid] == value)
		{
			if (array[mid - 1] == value)
			{
				print_tree(array, l, mid);
				return (binary_search(array, l, mid, value));
			} else
				return (mid);
		}

		/* If value < mid, search in left subarray */
		if (array[mid] > value)
		{
			print_tree(array, l, mid - 1);
			return (binary_search(array, l, mid - 1, value));
		}
		/* Else value is in right subarray */
		print_tree(array, mid + 1, r);

		return (binary_search(array, mid + 1, r, value));
	}

	/* We reach here when element is not present in array */
	return (-1);
}

/**
  * advanced_binary - return index of FIRST value in sorted array.
  *    It's suboptimal to use recursion when the value is on the border
  *    but will recurse anyway.
  * @array: pointer to the first element of the array to search in
  * @size: number of elements in array
  * @value: value to search for
  * Return: index of first value occurence or -1 if not
  */
int advanced_binary(int *array, size_t size, int value)
{
	size_t index = 0;

	if ((array == NULL) || (size <= 0))
		return (-1);

	print_tree(array, 0, size - 1);
	index = binary_search(array, 0, size - 1, value);

	return (index);
}
