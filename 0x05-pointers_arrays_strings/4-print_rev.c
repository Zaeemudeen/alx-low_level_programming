#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - print the reverse of a string
 *
 * @s: the string to be reversed
 * Return: Always zero
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}

