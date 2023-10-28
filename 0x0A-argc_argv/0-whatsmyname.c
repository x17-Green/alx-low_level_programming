#include <stdio.h>
/**
 * main - Function to relay program name
 * @argc: Argument count
 * @argv: Argument vector array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num;

	printf("%s\n", argv[0]);

	if (argc > 1)
	{
		for (num = 1; num < argc; num++)
		{
			printf("%s[%d] = %s\n", argv[0], num, argv[num]);
		}
	}
	/**
	 * else
	 * {
	 * printf("No other arguments left.\n");
	 * }
	 */
	return (0);
}
