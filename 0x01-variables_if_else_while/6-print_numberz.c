#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */

/**
* main - entry point
* program prints the decimal numbers 0 - 9 using putchar and not printf
* Return: always 0 (successful)
*/

int main(void)

{
			int a;

			for (a = '0'; a <= '9'; a++)
			putchar (a);
			putchar ('\n');
			return (0);
}

