#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - catenates a second string to the first one
 *
 * @dest: the first string
 * @src: the second string<F11>
 * Return: returns dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
