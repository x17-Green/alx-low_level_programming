#include <stdio.h>
/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
	int n1, num = 0;

	for (n1 = 0; n1 < 1024; n1++)
	{
		if ((n1 % 3) == 0 || (n1 % 5) == 0)
		{
			num += n1;
		}
	}
	printf("%d\n", num);
	return (0);
}
