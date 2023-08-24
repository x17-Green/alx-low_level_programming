#include "main.h"
#include <stdio.h>
/**
 * print_array - function to print `n` of elements
 * @a: an array
 * @n: an integer
 */
void print_array(int *a, int n)
{
	int li;

	li = 0;

	for (n--; n >= 0; n--, li++)
	{
		printf("%d", a[li]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
