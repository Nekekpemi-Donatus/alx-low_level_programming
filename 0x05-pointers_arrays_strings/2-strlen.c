#include <stdio.h>
#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: string of length
 * Return: return length as integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
