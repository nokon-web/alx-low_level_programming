#include "main.h"
#include <stdio.h>
/**
 * swap_int- function that swaps the values of two integers.
 * @a: input
 * @b: input
 * return: (a,b)
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
