#include "main.h"

/**
 * swap_int -function that swaps the values of two integers.
 * @a: first parameter to be executed
 * @b: second parameter to be executed
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
