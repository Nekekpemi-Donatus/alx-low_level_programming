#include "main.h"

/**
 * 0-isupper.c - function that checks for uppercase character.
 * @c: character to be tested
 * Reture: 1 whether it is, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
