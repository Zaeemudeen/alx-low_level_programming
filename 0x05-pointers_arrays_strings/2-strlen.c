#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strlen - function swaps two integers
 * @s: pointer to the string character
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int l;

	l = 0;
	while (l != '\0')
	{
		l++;
		s++;
	}

	return (l);
}

