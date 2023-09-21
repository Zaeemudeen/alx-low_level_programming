#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * cap_string - changes the first letters of string to uppper case
 * @str: the string
 * Return: returns str
 */

char *cap_string(char *str)
{
	int i = 0, j, s;

	while (str[i] != '\0')
	{
	i++;

	for (j = 0; j < i; j++)
	{
		s = str[j - 1];

		if (s == '\n' || s == '.' || s == ' ' || s == '\t')
		str[j] = toupper(str[j]);
	}
	}
	return (str);
}
