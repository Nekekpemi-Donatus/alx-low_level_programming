#include <stdio.h>

/**
 * main - Entry point
 *
 *Write a program that prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num_1, num_2;

	for (num_1 = 0; num_1 < 100; num_1++)
	{
		for (num_2 = 0; num_2 < 100; num_2++)
		{
			if (num_2 > num_1)
			{
				putchar ((num_1 / 10) + '0');
				putchar ((num_1 % 10) + '0');
				putchar (' ');
				putchar ((num_2 / 10) + '0');
				putchar ((num_2 % 10) + '0');
				if (num_1 != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}

