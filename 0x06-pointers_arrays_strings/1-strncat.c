#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat -  function that concatenates two strings
 * @dest:destination
 * @src:source
 * @n:integer
 * return: string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *concat = strncat(dest, src, n);

	return (concat);
}
