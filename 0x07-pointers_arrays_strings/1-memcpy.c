#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - copies a string to a pointer
 * @dest: the location tostore the copied string
 * @src: the source of the string
 * @n: the numbe rof bytes to copy
 * Return: returns dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}

