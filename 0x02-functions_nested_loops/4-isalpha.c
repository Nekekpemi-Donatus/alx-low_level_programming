#include "main.h"

/**
 * _isalpha - function to check a lowercase or uppercase character
 *@c:	is the int that will be use as the arguement of the function
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
