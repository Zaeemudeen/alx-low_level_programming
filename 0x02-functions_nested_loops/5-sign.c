#include <stdio.h>
#include "main.h"

/**
   * print_sign - this function checks if a character is positive, negative or zero.
   * @n: this is the character to be checked
   * Return: Returns 1 if the character is a positive and 0 if n is zero and -1 otherwise
   */

int print_sign(int n)
{
	if (n > 0)
	{
	printf("+");
	return (1);
	}

	else if (n == 0)
	{
	printf("0");
	return (0);
	}
	
	else
	{
	printf("-");
	return (-1);
	}
}

