#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/* print_alphabet_x10 - this function prints alphabets 10 times. */

void print_alphabet_x10(void)
{
		int x = 0, y;

		while (x < 10)
		{

			for (y = 'a'; y <= 'z'; y++)
			{
				putchar(y);
			}

			printf("\n");
			x++;
		}
}

