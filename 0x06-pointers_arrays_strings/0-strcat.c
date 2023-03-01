#include "main.h"
#include <stdio.h>
#include<string.h>

/**
 * _strcat - function that concatenates two strings.
 * @dest:destination
 * @src:source
 * return:dest and src
 */
char *_strcat(char *dest, char *src)
{
	char *concat = strcat(dest, src);

	return (concat);
}
