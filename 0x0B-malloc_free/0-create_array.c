#include<stdio.h>
#include<stdlib.h>

/*
 * create_array-function that creates an array of chars, and
 * initializes it with a specific char.
 * @size: int
   @c: character
 * return:ointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *bufer;

	bufer = (char *)malloc(size * sizeof(c));
	if (bufer == 0)
	{
		return (NULL);
	}
	return (bufer);
}
