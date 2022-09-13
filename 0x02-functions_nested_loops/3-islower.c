#include "main.h"

/**
 * _islower - function to check a lowercase character
 *@C:	is the int that will be use as the arguement of the function
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
