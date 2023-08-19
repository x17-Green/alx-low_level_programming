#include <stdio.h>
/**
 * main - main function
 *
 * count: count numbers from 1-100
 *
 * Return: always 0
 */
int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if ((count % 3) == 0 && (count % 5) == 0)
			printf("FizzBuzz");
		else if ((count % 3) == 0)
			printf("Fizz");
		else if ((count % 5) == 0)
			printf("Buzz");
		else
			printf("%d", count);
		if (count == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
