#include <stdio.h>
#include <stdlib.h>
#include "slide_line.h"

/**
 * slide_line - implement game 2048 as in https://play2048.co/.
 *              It slides and merges an array of integers.
 * @line: points to an array of integers containing size elements
 * @size: number of elements
 * @direction: direction to slide the tiles. SLIDE_LEFT | SLIDE_RIGHT.
 *             If the direction is something else, the function will fail.
 * Return: 1 if successful. 0 if mot
 */
int slide_line(int *line, size_t size, int direction)
{
	unsigned int i = 0, j = 0, index = 0;
	unsigned int ar[1000] = { 0 };

	if (direction == SLIDE_LEFT)
	{
		for (i = 0; i < size; i++)
			if (line[i] != 0)
				ar[index++] = line[i];

		for (i = 0; i < size; i++)
			line[i] = 0;

		for (i = 0; i < index; i += 2)
		{
			if (ar[i] == ar[i + 1])
			{
				line[j++] = ar[i] * 2;
			} else
			{
				line[j++] = ar[i];
				line[j++] = ar[i + 1];
			}
		}

		for (i = 0; i < index; i++)
			printf("%d ", ar[i]);

		if (index % 2 == 1)
		{
			line[j] = ar[i];
		}

		return (1);
	} else if (direction == SLIDE_RIGHT)
	{
		for (i = 0; i < size; i++)
			if (line[i] != 0)
				ar[index++] = line[i];

		for (i = 0; i < size; i++)
			line[i] = 0;

		j = size - 1;
		for (i = index - 1; i > 0; i -= 2)
		{
			if (ar[i] == ar[i - 1])
			{
				line[j] = ar[i] * 2;
				j--;
			} else
			{
				line[j] = ar[i];
				j--;
				line[j] = ar[i - 1];
				j--;
			}
			if (i == 1)
				break;
		}

		if (index % 2 == 1)
		{
			line[j] = ar[0];
		}

		return (1);
	}

	printf("Bad direction\n");
	return (0);
}
