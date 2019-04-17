#include <stdio.h>
#include <stdlib.h>

/**
  * print_tree - print binary tree represented as an array
  * @array: pointer to the first element of the array to search in
  * @size: number of elements in array
  * Return: N/A
  */
void print_tree(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

/**
  * advanced_binary - return index of FIRST value in sorted array
  * @array: pointer to the first element of the array to search in
  * @size: number of elements in array
  * @value: value to search for
  * Return: index of first value occurence or -1 if not
  */
int advanced_binary(int *array, size_t size, int value)
{
	size = size;
	value = value;

	if (array == NULL)
		return (-1);
	return (-1);
}
