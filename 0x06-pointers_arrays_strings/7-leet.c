#include <stdio.h>
#include "main.h"
/**
 * leet - manipulates selected elements
 * @str: the string
 * Return: returns str
 */

char *leet(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
	{
	i++;

	for (j = 0; j < i; j++)
	{
		if (str[j] == 65 || str[j] == 97)
		str[j] = 52;

		if (str[j] == 69 || str[j] == 101)
		str[j] = 51;

		if (str[j] == 79 || str[j] == 111)
		str[j] = 48;

		if (str[j] == 84 || str[j] == 116)
		str[j] = 55;

		if (str[j] == 76 || str[j] == 108)
		str[j] = 49;
	}
	}
	return (str);
}

