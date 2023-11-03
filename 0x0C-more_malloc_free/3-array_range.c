#include "main.h"
/**
 * array_range - Function create arrays of int
 * @min: Minimum int value
 * @max: Maximum int value
 *
 * Return: NULL if min > max, NULL if malloc fails, otherwise Array
 */
int *array_range(int min, int max)
{
	size_t size;
	int *arr, i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	arr = (int *)malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (int i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
