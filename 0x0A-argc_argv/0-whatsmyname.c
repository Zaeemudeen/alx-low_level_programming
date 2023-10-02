#include <stdlib.h>
#include <stdio.h>

/**
 * main - pritns the name of itself
 *
 * @argc: arg counbt
 * @argv: arg vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

