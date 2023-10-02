#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints n of arg passed
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
