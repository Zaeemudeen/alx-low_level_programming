#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * string_toupper - changes lower case to upper
 * @str: the string
 * Return: returns str
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}

