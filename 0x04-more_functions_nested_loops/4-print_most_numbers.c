#include <stdio.h>
#include "main.h"
/**
* print_most_numbers - this function prints number
* Return: Always zero
*/

void print_most_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x != '2' && x != '4')
		putchar(x);
	}
	putchar('\n');
}

