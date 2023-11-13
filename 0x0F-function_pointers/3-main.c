#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf(stderr, "Error\n");
		return 1;
	}

	int a = atoi(argv[1]);
	int b = atoi(argv[3]);

	int int (*op_func)(int, int) = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf(stderr, "Error: Unsupported operator\n");
		return 1;
	}

	int result = op_func(a, b);
	printf("%d\n", result);

	return 0;
}
