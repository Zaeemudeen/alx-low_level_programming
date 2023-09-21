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
	char leet[] = "aeotl"
	char leet2[] = "AEOTL"
	char leet3[] = "43071"

	while (*str != '\0')
	{
	for (j = 0; j <= 4; j++)
	{
		if (*str == leet[j] || *str == leet2[j])
		*str = leet3[j];
	}
	str++;
	i++;
	}
	str = str - 1;
	return (str);
}

