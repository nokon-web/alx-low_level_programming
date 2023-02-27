#include "main.h"
#include <stdio.h>
/**
 * rev_string- function that reverses a string.
 * @s: input
 * return: string in reverse
 */
void rev_string(char *s)
{
	char rv = s[0];
	int c = 0;
	int i;

	while (s[c] != '\n')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		rv = s[i];
		s[i] = s[c];
		s[c] = rv;
	}
}
