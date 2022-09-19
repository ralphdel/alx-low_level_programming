#include "main.h"

/**
 * swap_int - Swap the value of two integers
 * @a: integer a
 * @b: integer b
 * Return: returns nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = *tmp;
}

