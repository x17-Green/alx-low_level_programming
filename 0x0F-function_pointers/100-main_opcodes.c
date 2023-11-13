#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function prints the opcodes
 * @argc: Arguments count
 * @argv: Argument vector string pointer
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int bytes, index;
	int (*address)(int, char **) = main;
	unsigned char opcode[bytes];

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < bytes; index++)
	{
		opcode[index] = *(unsigned char *)address;
		address++;
	}

	for (index = 0; index < bytes; index++)
	{
		printf("%.2x", opcode[index]);

		if (index == bytes - 1)
		{
			continue;
		}
		printf(" ");
	}

	printf("\n");

	return (0);
}
