#include <stdio.h>
#include <stdlib.h>


/**
 * main - Entry point
 *
 * Return: product of multiplication or exit with status of 98 if error
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 3)
	{
		for (i=0;i<argc;i++)
			printf("%s\n", argv[i]);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}

	return (0);
}
