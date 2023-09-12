#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */

/**
* main - entry point
* program prints the decimal numbers 0 - 9
* Return: always 0 (successful)
*/

int main(void)
{
		/* local variable definition */
		int a = 0;

		/* while loop execution */
		while (a < 10)
			{
			printf("%d", a);
			a++;
			}
			printf("\n");

		return (0);
}
