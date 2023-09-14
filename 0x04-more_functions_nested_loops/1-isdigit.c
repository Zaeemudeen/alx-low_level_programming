#include <stdio.h"
#include "main.h"
/**
  * _isdigit - this function checks for number
  * @c: the character to be checked
  * Return: 1 if the c is number and 0 else
  */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	return (1);

	else
	return (0);
}
