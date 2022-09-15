#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - function that prints the numbers from 0 to 9,new line
 * Reture: return nothing
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if ((n == 50) || (n == 52))
		{
			continue;
		}
		putchar(n);
	}
	putchar(10);
}
