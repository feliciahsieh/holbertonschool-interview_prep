#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * isSierpinskiCarpetPixelFilled - checks if pixel should be filled
 * @x: x coord
 * @y: y coord
 * Return: 1 if filled; 0 if not
 */
int isSierpinskiCarpetPixelFilled(int x, int y)
{
	while (x > 0 || y > 0)
	{
		if ((x % 3 == 1) && (y % 3 == 1))
			return (0);
		x /= 3;
		y /= 3;
	}
	return (1);
}

/**
 * menger - implement 2D Menger sponge
 * @level: level of 2D Menger sponge to create
 * Return: N/A
 */
void menger(int level)
{
	char *menger;
	int size = 0, width = 0, i = 0, j = 0;

	if (level < 0)
		return;
	if (level == 0)
	{
		printf("#\n");
		return;
	}

	width = pow(3, level);
	size = width * width;

	menger = malloc((size * sizeof(char)) + 1);
	if (menger == NULL)
		return;
	menger[size * sizeof(char)] = '\n';

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < width; j++)
			if (isSierpinskiCarpetPixelFilled(i, j))
				printf("%c", menger[i * width + j] = '#');
			else
				printf("%c", menger[i * width + j] = ' ');
		printf("\n");
	}

	free(menger);
}
