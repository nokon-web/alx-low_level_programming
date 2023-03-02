#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function that compares two strings.
 * @s1: string 1
 * @s2: string 2
 * return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int count1 = 0;
	int count2 = 0;

	while (s1[i] != '\0')
	{
		count1 += 1;
		i++;
	}
	while (s2[j] != '\0')
	{
		count2 += 1;
		j++;
	}
	if (count1 < count2)
	{
		return (-15);
	}
	else if (count1 > count2)
	{
		return (15);
	}
	else
		return (0);
}
