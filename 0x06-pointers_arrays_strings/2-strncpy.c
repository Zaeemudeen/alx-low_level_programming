#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - copy the second string to the first
 * @dest: the first string
 * @src: the second string
 * @n: number of characters to copy
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
