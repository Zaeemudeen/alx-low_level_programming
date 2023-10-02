#include <stdio.h>
#include "main.h"

/**
   * _isalpha - this function checks if a character is a letter or number.
   * @c: this is the character to be checked
   * Return: Returns 1 if the character is a letter, and 0 otherwise.
   */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);

	else
	return (0);
}

