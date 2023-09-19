#include <stdio.h>
#include "main.h"

/**
 * print_array - prints arrays
 *
 * @a: the array name
 * @n: the array size
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			putchar('44');
			putchar('32');
		}
	}
	putchar('\n');
}

