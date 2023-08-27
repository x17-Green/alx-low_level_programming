#include "main.h"
/**
 * reverse_array - main function to reverse arrays in the int variables
 * @a: an int array containing sizes
 * @n: int variable containing number of elements
 */
void reverse_array(int *a, int n)
{
	int l1, n1;

	for (l1 = 0; l1 < (n / 2); l1++)
	{
		n1 = a[l1];
		a[l1] = a[n - l1 - 1];
		a[n - l1 - 1] = n1;
	}
}
