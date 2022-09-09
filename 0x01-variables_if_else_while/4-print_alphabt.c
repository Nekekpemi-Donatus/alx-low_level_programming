#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)
{
char alps;

for (alps = 'a'; alps <= 'z'; alps++)
{
	if (alps == 'e')
		continue;

	else if (alps == 'q')
		continue;

	putchar (alps);
}

putchar('\n');

return (0);
}
