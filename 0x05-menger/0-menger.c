#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * printMenger - print Menger 2D cube (Menger Face)
 * @m: menger cube represented as an array
 * @w: width of menger cube
 * Return: N/A
 */
void printMenger(char *m, int w)
{
	int i = 0, j = 0;

	for (i = 0; i < w; i++)
	{
		for (j = 0; j < w; j++)
			printf("%c", m[i * w + j]);
		printf("\n");
	}
}


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
	int sizeHole = 0;

	sizeHole = sizeHole;
	size = size;

	if (level < 0)
		return;
	if (level == 0)
	{
		printf("#\n");
		return;
	}

	width = pow(3, level);
	size = width * width;

	for (i = 0; i < size; i++)
	{
		menger = (char *)malloc(size * sizeof(char) + 1);
	}
	menger[size * sizeof(char) + 1] = '\n';

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < width; j++)
			if (isSierpinskiCarpetPixelFilled(i, j))
				menger[i * width + j] = '#';
			else
				menger[i * width + j] = ' ';
	}

	printMenger(menger, width);
}
