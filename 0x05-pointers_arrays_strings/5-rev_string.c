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
	int l = 0, r = strlen(s) - 1;
	char temp;

	while (l < r)
	{
		temp = s[l];

		s[l] = s[r];
		s[r] = temp;

		r--;
	}
}

