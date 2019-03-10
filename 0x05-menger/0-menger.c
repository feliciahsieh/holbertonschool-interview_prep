#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * printMenger - print Menger 2D cube (Menger Face)
 * @m: menger cube represented as an array
 * @w: width of menger cube
 * @s: size of menger cube
 * Return: N/A
 */
void printMenger(char *m, int w, int s)
{
	int i = 0;

	/* printf("w: %d  s: %d\n", w, s); */
	for (i = 0; i < s; i++)
	{
		printf("%c", m[i]);
		if (((i + 1) % w) == 0)
			printf("\n");
	}
}

/**
 * menger - implement 2D Menger sponge
 * @level: level of 2D Menger sponge to create
 * Return: N/A
 */
void menger(int level)
{
	char *menger = NULL;
	int size = 0, width = 0, i = 0;
	int sizeHole = 0;

	menger = menger;
	sizeHole = sizeHole;

	if (level < 0)
		return;
	if (level == 0)
	{
		printf("#\n");
		return;
	}

	width = pow(3, level);
	size = width * width;

	menger = malloc(size * sizeof(char) + 1);
	if (menger == NULL)
		return;

	for (i = 0; i < size; i++)
		menger[i] = '#';
	menger[i] = '\n';

	/* poke holes */
	sizeHole = pow(3, (level - 1));
	/* printf("sizeHole: %d\n", sizeHole); */
	for (i = 0; i < level; i++)
	{
		menger[size / 2] = ' ';
		/* printf("sizelocation: %d\n", size / 2); */
	}

	printMenger(menger, width, size);
}
