#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */

/**
* main - entry point
* program generate a random number and tell if the last digit is < 6 && != 0, > 5 or == 0
* Return: always 0 (successful)
*/

int main(void)
{
		int n;
		int L;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */

		L = n % 10;

		if (L > 5)
			printf("Last digit of %d is %d and is greater than 5\n", n, L);

		else if (L == 0)
			printf("Last digit of %d is %d and is 0\n", n, L);

		else
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, L);

		return (0);
}
