#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */

/**
* main - entry point
* program prints Alphabets from a - z in lower case
* Return: always 0 (successful)
*/

int main(void)

{
			int ch;

			for (ch = 'a'; ch <= 'z'; ch++)
			putchar (ch);
			putchar ('\n');
			return (0);
}
