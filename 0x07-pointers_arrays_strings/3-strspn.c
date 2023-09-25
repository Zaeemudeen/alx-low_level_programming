#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the prefix substring
 * @accept: the string
 * Return: returns the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	char len = strspn(s, accept);

	return (len);
}

