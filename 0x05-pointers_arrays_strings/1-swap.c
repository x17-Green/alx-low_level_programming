#include "main.h"
/**
 * swap_int - main function to swap
 * @a: integer to point to
 * @b: integer to point
 *
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
