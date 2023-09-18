#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverse the string
 *
 * @s: the string
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i, l = 0, r = strlen(s) - 1;
	char temp;

	for (i = l; i <= r; i++)
	{
		temp = s[i];

		s[i] = s[r];
		s[r] = temp;

		r--;
	}
}

