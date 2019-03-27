#include <stdio.h>

#include "sandpiles.h"

#define GSIZE 3
/**
 * printGrid - print gridsum
 * @grid: first grid to add
 * Return: N/A
 */
static void printGrid(int grid[GSIZE][GSIZE])
{
	int i, j;

	for (i = 0; i < GSIZE; i++)
	{
		for (j = 0; j < GSIZE; j++)
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
int isStableGrid(int grid[GSIZE][GSIZE])
{
	int i = 0, j = 0;

	for (i = 0; i < GSIZE; i++)
		for (j = 0; j < GSIZE; j++)
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
	int i = 0, j = 0, g[3][3];

	if ((grid1 == NULL) || (grid2 == NULL))
		return;
	for (i = 0; i < GSIZE; i++)
		for (j = 0; j < GSIZE; j++)
			g[i][j] = grid1[i][j] + grid2[i][j];
	while (!isStableGrid(g))
	{
		printf("=\n");
		printGrid(g);
		for (i = 0; i < GSIZE; i++)
			for (j = 0; j < GSIZE; j++)
				grid1[i][j] = g[i][j];
		g[0][0] = ((grid1[0][0] > 3) ? grid1[0][0] - 4 : grid1[0][0]) +
			((grid1[1][0] > 3) ? 1 : 0) + ((grid1[0][1] > 3) ? 1 : 0);
		g[0][1] = ((grid1[0][1] > 3) ? grid1[0][1] - 4 : grid1[0][1]) +
			((grid1[0][0] > 3) ? 1 : 0) + ((grid1[1][1] > 3) ? 1 : 0) +
			((grid1[0][2] > 3) ? 1 : 0);
		g[0][2] = ((grid1[0][2] > 3) ? grid1[0][2] - 4 : grid1[0][2]) +
			((grid1[0][1] > 3) ? 1 : 0) + ((grid1[1][2] > 3) ? 1 : 0);
		g[1][0] = ((grid1[1][0] > 3) ? grid1[1][0] - 4 : grid1[1][0]) +
			((grid1[0][0] > 3) ? 1 : 0) + ((grid1[2][0] > 3) ? 1 : 0) +
			((grid1[1][1] > 3) ? 1 : 0);
		g[1][1] = ((grid1[1][1] > 3) ? grid1[1][1] - 4 : grid1[1][1]) +
			((grid1[1][0] > 3) ? 1 : 0) + ((grid1[0][1] > 3) ? 1 : 0) +
			((grid1[1][2] > 3) ? 1 : 0) + ((grid1[2][1] > 3) ? 1 : 0);
		g[1][2] = ((grid1[1][2] > 3) ? grid1[1][2] - 4 : grid1[1][2]) +
			((grid1[1][1] > 3) ? 1 : 0) + ((grid1[0][2] > 3) ? 1 : 0) +
			((grid1[2][2] > 3) ? 1 : 0);
		g[2][0] = ((grid1[2][0] > 3) ? grid1[2][0] - 4 : grid1[2][0]) +
			((grid1[1][0] > 3) ? 1 : 0) + ((grid1[2][1] > 3) ? 1 : 0);
		g[2][1] = ((grid1[2][1] > 3) ? grid1[2][1] - 4 : grid1[2][1]) +
			((grid1[2][0] > 3) ? 1 : 0) + ((grid1[1][1] > 3) ? 1 : 0) +
			((grid1[2][2] > 3) ? 1 : 0);
		g[2][2] = ((grid1[2][2] > 3) ? grid1[2][2] - 4 : grid1[2][2]) +
			((grid1[2][1] > 3) ? 1 : 0) + ((grid1[1][2] > 3) ? 1 : 0);
	}
	for (i = 0; i < GSIZE; i++)
		for (j = 0; j < GSIZE; j++)
			grid1[i][j] = g[i][j];
}
