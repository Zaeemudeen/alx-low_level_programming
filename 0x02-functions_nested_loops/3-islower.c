#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * _islower - a function that checks if a letter is lower or uppercase
  * return - 0 if it is uppercase and 1 if it is lowercase
  */

int _islower(int c)

{
		if (c >= 'a' && c <= 'z')
		return (1);

		else
		return (0);
}

