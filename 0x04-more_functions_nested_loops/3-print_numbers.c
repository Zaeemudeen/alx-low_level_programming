#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - check the code
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

