#include "main.h"

/**
 * swap_int - swap the value of two integer
 * @a: pointer to the first value
 * @b: pointer to the second value
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

