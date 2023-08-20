#include <stdio.h>
/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
	int num;
	unsigned long n1 = 0, n2 = 1, ans;

	for (num = 0; num < 50; num++)
	{
		ans = n1 + n2;
		printf("%lu", ans);
		n1 = n2;
		n2 = ans;
		if (num == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
