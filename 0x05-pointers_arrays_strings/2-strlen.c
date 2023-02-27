#include "main.h"
#include <stdio.h>
/**
 * _strlen- function that returns the length of a string.
 * @s: string
 * return: len
 */
int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

