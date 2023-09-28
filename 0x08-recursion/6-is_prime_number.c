#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * is_prime_number - check if a number is prime
 * @n: the number to be checked
 * Return: 1 of prime, 0 if not or > 1
 */

int is_prime_number(int n)
{
	int i, vall, count;

	vall = ceil(sqrt(n));
	count = 0;

	if (n < 1)
	return (0);

	for (i = 2; i <= vall; i++)
	{
		if (n % i == 0)
		count = 1;
	}

	if ((count == 0 && n != 1) || n == 2 || n == 3)
	return (1);
	else
	return (0);
}
