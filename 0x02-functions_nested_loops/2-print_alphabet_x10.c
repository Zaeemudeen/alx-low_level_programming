#include <stdlib.h>
#include <stdio.h>

/**
* main - Prints the alphabets in lower case 10x
*
* Return: Always 0 for success
*/

void print_alphabet_x10(void);

int main(void)

{
		print_alphabet_x10();
		return (0);
}

void print_alphabet_x10(void)

{
		int x = 0, y;

		while (x < 10)
		{

			for (y = 'a'; y <= 'z'; y++)
			{
				putchar(y);
			}

			printf("\n");
			x++;
		}
}

