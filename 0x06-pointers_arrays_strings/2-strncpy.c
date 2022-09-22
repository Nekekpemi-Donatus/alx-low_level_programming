#include "main.h"

/**
 * _strncpy - function that copies a string.
 * terminating null byte, using at most an inputted number of bytes
 * if the length of the source string is less than the maximum byte number,
 * the remainder of the destination is filled with null bytes.
 * works identically to the standard library function 'strncpy'
 * @dest: buffer storing the string copy
 * @n: max number of byte copy
 * @src: the source string
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
