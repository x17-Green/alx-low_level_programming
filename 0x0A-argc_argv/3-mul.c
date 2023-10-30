#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function for multiplication
 * @argc: Argument count
 * @argv: Argument string vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, ans;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		ans = num1 * num2;

		printf("%d\n", ans);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
