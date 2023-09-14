#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _isupper - this function checks if a character is positive, negative or zero.
* @c: this is the character to be checked
* Return: Returns 1 if the c is uppercase and 0 if c is lowercase
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);

	else if (c >= 'a' && c <= 'z')
	return (0);
}

