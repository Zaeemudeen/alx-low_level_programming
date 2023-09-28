#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _puts_recursion - prints string using recursion
 * @s:the string to print
 *
 * Return: s
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	putchar(*s);
	_puts_recursion(s + 1);
}

