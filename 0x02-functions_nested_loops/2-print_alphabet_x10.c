#include "main.h"

/**
 * print_alphabet - function to print abc
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c, i = 0;
	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	}
       
_putchar('\n');
}
