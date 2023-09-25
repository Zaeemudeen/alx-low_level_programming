#include <stdio.h>
#include <string.h>
#include "maain.h"

/**
 * _strpbrk - searches for a string in the initialstring
 * @s: the initial string
 * @accept: the string to search
 * Return: NULL if no byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		int i;

		for (i = 0; accept[i] != '\0'; i++)
		{
		if (*s == accept[i])
		{
			return (s);
		}
		}
		s++;
	}
}

