#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)
{
char revs_alp;

for (revs_alp = 'z'; revs_alp >= 'a'; revs_alp--)
{
putchar (revs_alp);
}

putchar ('\n');

return (0);
}
