#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - prints the last half of a string
 *
 * @str: the string
 * Return: Always 0
 */

void puts_half(char *str)
{
	int i, j = strlen(str) - 1, n = j / 2;

	for (i = n + 1; i <= j; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

