#include <stdio.h>
#include "main.h"

/**
 * factorial - prints the factorial of given 
 * @n: the number
 * Return: factorial
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
