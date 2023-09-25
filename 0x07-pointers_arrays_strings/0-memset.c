#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset - set the memory with the given value
 * @s: the string
 * @b: the value to set to the memory
 * @n: the byte to reset
 * Return: returns s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}

