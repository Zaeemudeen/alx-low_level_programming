#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * _islower - a function that checks if a letter is lower or uppercase
  * return - 0 if it is uppercase and 1 if it is lowercase
  *
  * checks if a character is a lowercase letter.
  * c: The character to be checked
  * return: Returns 1 if the character is a lowercase letter, and 0 otherwise.
  */

int _islower(int c)

{
		if (c >= 'a' && c <= 'z')
		return (1);

		else
		return (0);
}

