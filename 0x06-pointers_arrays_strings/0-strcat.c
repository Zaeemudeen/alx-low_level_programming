#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - catenates a second string to the first one
 *
 * @dest: the first string
 * @src: the second string<F11>
 * Return: returns dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strcat(s1, s2);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	return (0);
}

