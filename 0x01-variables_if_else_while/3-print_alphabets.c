#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)
{
char alp_lowercase, alp_uppercase;

gor (alp_lowercase = 'a'; alp_lowercase <= 'z'; alp_lowercase++)
{
putchar(alp_lowercase);
}

for (alp_uppercase = 'A'; alp_uppercase <= 'Z'; alp_uppercase++)
{
putchar(alp_uppercase);
}


putchar('\n');

return (0);
}
