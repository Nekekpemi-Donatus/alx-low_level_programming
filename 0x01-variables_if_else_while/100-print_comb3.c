#include <stdio.h>

/**
 * main - Entry point
 *
 *a program that prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)
{
int num_1, num_2;

for (num_1 = 0; num_1 < 9; num_1++)
{
	for (num_2 = num_1 + 1; num_2 < 10; num_2++)
{
		putchar ((num_1 % 10) + '0');
		putchar ((num_2 % 10) + '0');

		if (num_1 == 8 && num_2 == 9)
		continue;

		putchar(',');

		putchar(" ");	
	}
}

putchar ('\n');

return (0);
}
