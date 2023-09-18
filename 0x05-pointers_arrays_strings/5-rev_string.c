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
	int l, r = strlen(s);
	char temp;

	for (l = 0; l <= r; l--)
	{
		temp = s[l];

		s[l] = s[r];
		s[r] = temp;

		r--;
	}
}

