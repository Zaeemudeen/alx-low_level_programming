#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * _islower - this function checks if a character is a lowercase letter.
  * c: this is the character to be checked
  * Return: Returns 1 if the character is a lowercase letter, and 0 otherwise.
  */

int _islower(int c)

{
		if (c >= 'a' && c <= 'z')
		return (1);

		else
		return (0);
}

