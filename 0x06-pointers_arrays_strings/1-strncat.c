#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat -  function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: integer
 * return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j != n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
