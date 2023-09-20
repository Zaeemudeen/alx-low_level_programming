#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * reverse_array - reverse the array
 * @a : the array
 * @n : numbe rof characters in the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int x, y = n - 1, temp;

	for (x = 0; x <= y; x++)
	{
		temp = a[x];

		a[x] = a[y];
		a[y] = temp;

		y--;
	}
}

