#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - duplicates string
 * @str: the string to duplicate
 * Return: pointer to the duplicate str
 */

char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
	{
		return (0);
	}

	s = strdup(str);
	return (s);
}

