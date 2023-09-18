#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - prints all other function in a string
 *
 * @str: the string
 * Return: Always 0
 */

void puts2(char *str)
{
	int i, j = strlen(str) - 1;

	for (i = 0; i <= j; i += 2)
	{
		putchar(str[i]);
	}
}

