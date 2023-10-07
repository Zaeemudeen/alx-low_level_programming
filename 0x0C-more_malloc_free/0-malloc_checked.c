#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked -  allocates memory
 * @b: size
 * Return: Pointer to allocated memory
 * normal termination
 * with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);

	if (str == NULL)
		exit(98);
	return (str);
}
