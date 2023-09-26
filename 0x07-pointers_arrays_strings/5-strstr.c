#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string
 * @needle: the substring
 * Return: Nulk if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}

