#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - Prints the alphabets in lower case
*
* print_alphabet - prints the alphabets in lower case
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

