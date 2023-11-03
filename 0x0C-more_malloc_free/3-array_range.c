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
	int *arr, i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
