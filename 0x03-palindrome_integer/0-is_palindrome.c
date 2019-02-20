#include <stdio.h>
#include "palindrome.h"

/**
 * is_palindrome - check if number is a palindrome
 * @n: number to check and unsigned long int varies from 0 to 4,294,967,295
 * Return: 1 if is palindrome; 0 if not
 */
int is_palindrome(unsigned long n)
{
	int digit[11] = {0};
	int i = 0, rem = 0, places = 0, mid = 0;

	while (n > 0)
	{
		rem = n % 10;
		digit[i++] = rem;
		n = n / 10;
	}
	places = i;
	mid = places / 2;

	for (i = 0; i < mid; i++)
	{
		if (digit[i] != digit[places - i - 1])
			return (0);
	}

	return (1);
}
