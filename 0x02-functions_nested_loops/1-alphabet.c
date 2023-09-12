#include <stdio.h>
#include <stdlib.h>
#include <main.h>

/**
* main - Prints the alphabets in lower case
*
* Return: Always 0 for success
*/

int main(void)

{
		print_alphabet();
		return (0);
}

void print_alphabet(void)

{
		int x;
		for (x = 'a'; x <= 'z'; x++)
		{
		putchar(x);
		}
		putchar('\n');
}

