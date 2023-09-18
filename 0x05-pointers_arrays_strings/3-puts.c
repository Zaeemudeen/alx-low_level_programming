#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _puts - print string to stdout
 *
 * @str: pointing to the string
 * Return: Always zero.
 */

void _puts(char *str)
{
	int i;

	i = 0;

	if (str[i] != '\0')
	{
		puts(str);
	}
	i++;
}

