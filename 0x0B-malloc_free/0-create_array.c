#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of char and initialize it
 * with a specific char
 * @size: size of array
 * @c: the char to intialize with
 *
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	if (size <= 0)
	{
		return (0);
	}

	s = malloc(size * sizeof(char));
	i = 0;

	if (s == 0)
	{
		return (0);
	}

	while (i < size)
	{
	s[i] = c;
	i++;
	}

	s[i] = '\0';
	return (s);
}

