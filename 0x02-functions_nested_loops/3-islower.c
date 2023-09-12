#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
   * _islower - a function that checks if a letter is lower or uppercase
   */

int _islower(int c);

int main(void)
{
    int r;
		r = _islower('H');
		putchar(r + '0');

		r = _islower('o');
		putchar(r + '0');

		r = _islower(108);
		putchar(r + '0');
		
		putchar('\n');
		
		return (0);
}

int _islower(int c)

{
		if (c >= 'a' && c <= 'z')
		return (1);

		else
		return (0);
}

