#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */

/**
* main - entry point
* program prints hexadecimal numbers 0 - f
* Return: always 0 (successful)
*/

int main(void)

{
			int a;

			for (a = '0'; a <= '9'; a++)
			putchar (a);
			for (a = 'a'; a <= 'f'; a++)
			putchar (a);
			putchar ('\n');
			return (0);
}

