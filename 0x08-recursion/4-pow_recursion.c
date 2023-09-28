#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * _pow_recursion - prints power of two integers
 * @x: base number
 * @y: exponential
 * Return: power and -1 if y < 0
 */
 
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return pow(x, y);
}
