#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates the specified number of char n from s2 s1
 * @dest: the first string
 * @src: the second string
 * @n: the specified number to concatenate
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
