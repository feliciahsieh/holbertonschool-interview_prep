#include <stdlib.h>
#include <stdio.h>

#include "sandpiles.h"

/**
 * printGrid - print gridsum
 * @grid: first grid to add
 * Return: N/A
 */
static void printGrid(int grid[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}

/**
 * isStableGrid - check if all cells are 0, 1, 2, or 3 only
 * @grid: grid to check
 * Return: 1 if TRUE, 0 if FALSE
 */
int isStableGrid(int grid[3][3])
{
	int i = 0, j = 0;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			if ((grid[i][j] < 0) || (grid[i][j] > 3))
				return (0);
	return (1);
}

/**
 * sandpiles_sum - implement sandpiles - fractal x + a = a
 * @grid1: first grid to add
 * @grid2: second grid to add
 * Return: N/A
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int i = 0, j = 0;
	int grid3[3][3] = {0};

	if ((grid1 == NULL) || (grid2 == NULL))
		return;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			grid3[i][j] = grid1[i][j] + grid2[i][j];

	while (!isStableGrid(grid3))
	{
		printf("=\n");
		printGrid(grid3);

		/* Copy grid3 to grid1 and clear grid3 */
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				grid1[i][j] = grid3[i][j];
				grid3[i][j] = 0;
			}
		}

		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				/* Topple */
				if (grid1[i][j] > 3)
					grid3[i][j] = grid1[i][j] - 4;
				else
					grid3[i][j] = grid1[i][j];

				if ((i == 0) && (j == 0))
				{
					if (grid1[1][0] > 3)
						grid3[i][j]++;
					if (grid1[0][1] > 3)
						grid3[i][j]++;
				}
				else if ((i == 0) && (j == 1))
				{
					if (grid1[0][0] > 3)
						grid3[i][j]++;
					if (grid1[1][1] > 3)
						grid3[i][j]++;
					if (grid1[0][2] > 3)
						grid3[i][j]++;
				}
				else if ((i == 0) && (j == 2))
				{
					if (grid1[0][1] > 3)
						grid3[i][j]++;
					if (grid1[1][2] > 3)
						grid3[i][j]++;
				}
				else if ((i == 1) && (j == 0))
				{
					if (grid1[0][0] > 3)
						grid3[i][j]++;
					if (grid1[2][0] > 3)
						grid3[i][j]++;
					if (grid1[1][1] > 3)
						grid3[i][j]++;
				}
				else if ((i == 1) && (j == 1))
				{
					if (grid1[1][0] > 3)
						grid3[i][j]++;
					if (grid1[0][1] > 3)
						grid3[i][j]++;
					if (grid1[2][1] > 3)
						grid3[i][j]++;
					if (grid1[1][2] > 3)
						grid3[i][j]++;
				}
				else if ((i == 1) && (j == 2))
				{
					if (grid1[1][1] > 3)
						grid3[i][j]++;
					if (grid1[0][2] > 3)
						grid3[i][j]++;
					if (grid1[2][2] > 3)
						grid3[i][j]++;
				}
				else if ((i == 2) && (j == 0))
				{
					if (grid1[1][0] > 3)
						grid3[i][j]++;
					if (grid1[2][1] > 3)
						grid3[i][j]++;
				}
				else if ((i == 2) && (j == 1))
				{
					if (grid1[2][0] > 3)
						grid3[i][j]++;
					if (grid1[1][1] > 3)
						grid3[i][j]++;
					if (grid1[2][2] > 3)
						grid3[i][j]++;
				}
				else if ((i == 2) && (j == 2))
				{
					if (grid1[2][1] > 3)
						grid3[i][j]++;
					if (grid1[1][2] > 3)
						grid3[i][j]++;
				}
			}
		}
	}

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			grid1[i][j] = grid3[i][j];
}
