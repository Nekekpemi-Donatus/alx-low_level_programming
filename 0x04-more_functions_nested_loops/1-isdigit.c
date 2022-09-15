#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: character to be tested
 * Reture: 1 whether it is, 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
		return (0);
}