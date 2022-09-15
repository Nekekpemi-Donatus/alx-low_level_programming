#include <stdio.h>
#include "main.h"

/**
 * print_triangle - function that draws a triangle line on the terminal.
 * @size: used parameter
 * Reture: return nothing
 */
void print_triangle(int size)
{
	int inc1, inc2;

	if (size > 0)
	{
		for (inc1 = 1; inc1 < size; inc1++)
		{
			for ((inc2 = size - inc1); inc2 > 0; inc2--)
			{
				putchar(' ');
			}

			for (inc2 = 0; inc2 < inc1; inc2++)
			{
				putchar('#');
			}

			if (inc1 == size)
			{
				continue;
			}
		}
	}
	else
	{
		putchar('\n');
	}
}
