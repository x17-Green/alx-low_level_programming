#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array
 * @array: Array pointer to an int
 * @size: The size of an array int
 * @cmp: A pointer to the used function for comparism
 *
 * Return: If no match or size <= 0 - -1, otherwise
 * index of element cmp does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL || size == 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
