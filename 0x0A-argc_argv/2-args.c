#include <stdio.h>
/**
 * main - Fucntion to print all argument count
 * @argc: Argument count
 * @argv: Array of strings to arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int num;

	for (num = 0; num < argc; num++)
	{
		printf("%s\n", argv[num]);
	}
	return (0);
}
