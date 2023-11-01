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
	if (size == 0)
	{
		return (NULL);
	}

	char *arr = (char *) malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	unsigned int i;

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
/**
 * main - Recursive function
 *
 * Return: 1 if pointer to array or NULL, otherwise 0
 */
int main(void)
{
	char c = 'a';
	unsigned int size = 10;
	char *arr = create_array(size, c);

	if (arr == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}

	unsigned int i;

	for (i = 0; i < size; i++)
	{
		printf("%c ", arr[i]);
	}

	free(arr);
	return (0);
}
