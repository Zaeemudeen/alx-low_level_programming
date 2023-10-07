#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked -  allocates memory using malloc.
 * @b: size
 * Return: Pointer to allocated memory or normal process termination
 * with a status value of 98
 */
 
void *malloc_checked(unsigned int b)
{
	void *str;
	
	str = malloc(b);
	
	if(str == 0)
		exit(98);
	return (str);
}
