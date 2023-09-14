#include <stdio.h>
#include "main.h"
/**
* more_numbers - prints numbers from 0 to 14 ten times
* Return: On success 1.
*/
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j / 10 != 0)
			{
				putchar('0' + j / 10);
			}
			putchar('0' + j % 10);
		}
		putchar('\n');
	}
}


