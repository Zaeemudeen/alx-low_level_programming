#include <stdio.h>
#include "main.h"
/**
* print_numbers - this function prints number
* Return: Always 0
*/

void print_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
	putchar(x);
	}
	putchar('\n');
}

