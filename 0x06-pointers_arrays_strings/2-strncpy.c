#include "main.h"
#include <stdio.h>
#include<string.h>

/**
 * _strncpy - function that copies a string.
 * @dest: destination
 * @src:source
 * @n:integer
 * return:string copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
