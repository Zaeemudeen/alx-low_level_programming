#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - Prints the alphabets in lower case
*
* print_alphabet-prints the alphabets in lower case, followed by a new line.
*
* Return: Always 0 for success
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

