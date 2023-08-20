#include <stdio.h>
/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
	unsigned long n1 = 0, n2 = 1, ans;
	float tt_ans;

	while (1)
	{
		ans = n1 + n2;
		if (ans > 4000000)
		{
			break;
		}
		if ((ans % 2) == 0)
		{
			tt_ans += ans;
		}
		n1 = n2;
		n2 = ans;
	}
	printf("%.0f\n", tt_ans);
	return (0);
}
