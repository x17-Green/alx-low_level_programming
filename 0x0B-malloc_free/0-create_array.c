#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - function to creare arrat or char
 * @size: size of array
 * @c: char variable for array
 *
 * Return: number of array filled
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char *) malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
