#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * print_alphabet - prints the alphabets in lower case, followed by a new line.
  */


void print_alphabet(void)
{
		int x;

		for (x = 'a'; x <= 'z'; x++)
		{
		putchar(x);
		}
		putchar('\n');
}

