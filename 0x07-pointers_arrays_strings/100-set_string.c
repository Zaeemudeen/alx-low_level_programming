#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * set_string - sets the value of a poimter
 * @s: the pointer
 * @to: the string to reset
 * Return: Always 0
 */

void set_string(char **s, char *to)
{
	*s = to;
}

