#include "main.h"
/**
 * mul - Multiply two positive int variables
 * @num1: int pointer 1
 * @num2: int pointer 2
 * @res: int pointer to result
 *
 * Return: res(ult)
 */
int* mul(char* num1, char* num2, int* res)
{
	int i, j, n1, n2, size;

	size = strlen(num1) + strlen(num2);
	res = (int *) malloc(size * sizeof(int));

	for (i = 0; i < size; i++)
	{
		res[i] = 0;
	}
	for (i = 0; num1[i] != '\0'; i++)
	{
		n1 = num1[i] - '0';
		for (j = 0; num2[j] != '\0'; j++)
		{
			n2 = num2[j] - '0';
			res[i + j] += n1 * n2;
		}
	}
	for (i = 0; i < size - 1; i++)
	{
		res[i + 1] += res[i] / 10;
		res[i] %= 10;
	}

	printf("%d", res[size - 1]);

	for (i = size - 2; i >= 0; i--)
	{
		printf("%d", res[i]);
	}
	free(res);
	return (0);
}
/**
 * is_number - Function checks if is a digit
 * @n: Char pointer to check for string
 *
 * Return: 0 if pointer is digit, otherwise 1
 */
int is_number(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (!isdigit(n[i]))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * is_big_number -  Function checks if is a big number
 * @n: Char poiner to check for
 *
 * Return: 0
 */
int is_big_number(char *n)
{
	int length;

	length = strlen(n);

	if (length > 5000)
	{
		return (1);
	}
	return (0);
}
/**
 * check_args - Function checks for arguments
 * @argc: Argument count
 * @argv: Argument vector string pointer
 *
 * Return: 0 if argc not equals 3
 *	0 if argument vector is number
 *	1 if argument count is less than 1
 */
int check_args(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			return (0);
		}
		if (is_big_number(argv[i]))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - Main function
 * @argc: Argument count
 * @argv: Argument vector string
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int *res;

	if (!check_args(argc, argv))
	{
		printf("Error\n");
		exit(98);
	}

	res = (int *) malloc(sizeof(int));

	num1 = argv[1];
	num2 = argv[2];

	res = mul(num1, num2, res);

	printf("%d\n", *res);

	free(res);

	return (0);
}
