#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */

/**
* main - entry point
* program prints the size of functions
* Return: always 0 (successful)
*/

int main(void)

{
			int a;

			for (a = 48; a <= 57 ; a++)
			{
				putchar (a);

				if (a != 57)
				putchar (44);
				putchar (32);
			}
			return (0);
}
