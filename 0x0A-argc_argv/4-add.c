#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function that adds only positive numbers
 * @argc: Argument count
 * @argv: Argument vector string
 *
 * Return: 1 if not digits, otherwise 0
 */
int main(int argc, char *argv[])
{
	int ans = 0;
	int num;

	if (argc == 0)
	{
		printf("%s0\n", argv[0]);
		return (0);
	}
	for (num = 1; num < argc; num++)
	{
		int number = 0;
		char *c;

		for (c = argv[num]; *c; c++)
		{
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
			number = number * 10 + (*c - '0');
		}
		ans += number;
	}

	printf("%d\n", ans);
	return (0);
}
