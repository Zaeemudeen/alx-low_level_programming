#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */

/**
* main - entry point
* program prints digits 0 - 9 with comma and space after each of them except the last
* Return: always 0 (successful)
*/

int main(void)

{
			int a;

			for (a = 48; a < 58 ; a++)
			{
				putchar(a);

				if (a != 57)
					{
					putchar(44);
					putchar(32);
					}
			}
			putchar('\n');
			return (0);
}

