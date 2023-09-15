#include <stdio.h>
#include "main.h"
/**
* print_line - prints line in numbers of n
* @n: number of lines to print
* Return: Always 0
*/
void print_line(int n)
{
	int i;

	if (n < 1)
	{
	putchar('\n');
	}
	else
	{
		for (i = 1;i <= n; i++)
		{
			putchar('_');
		}
	putchar('\n');
	}
}
