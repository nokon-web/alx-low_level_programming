#include "main.h"
#include <stdio.h>
#include<string.h>

/**
 * _strncpy - function that copies a string.
 * @dest: destination
 * @src:source
 * @n:integer
 * return:string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *copy = strncpy(dest, src, n);

	return (copy);
}
