#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strchr - locayes a character in s
 * @s: the string
 * @c: the character to be located
 * Return: NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}

