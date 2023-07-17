#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: String evaluated
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
