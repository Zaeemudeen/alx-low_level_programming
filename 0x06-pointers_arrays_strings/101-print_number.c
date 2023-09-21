#include <stdio.h>
#include "main.h"

/**
 * print_number - print integer
 * @n: the integer
 * Return: Always 0.
 */

void print_number(int n)
{
	int x, y, count;

	if (n < 0)
	{
		putchar(45);
		x = n * -1;
	}
	else
	{
		x = n;
	}

	y = x;
	count = 1;

	while (y > 9)
	{
		y /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		putchar(((x / count) % 10) + 48);
	}
}
