#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - check the code
* _isdigit - tbis function checks for number
* @c: the character to be checked
* Return: Always 1 if the c is number and 0 otherwise.
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	return (1);

	else
	return (0);
}
