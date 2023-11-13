#include "3-calc.h"
/**
 * op_add - Addition operator
 * @a: Int variable
 * @b: Int variable
 *
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Substraction operator
 * @a: Int variable
 * @b: Int variable
 *
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplication operator
 * @a: Int variable
 * @b: Int variable
 *
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Division operator
 * @a: Int variable
 * @b: Int variable
 *
 * Return: a / b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf(stderr, "Error: Division by zero.\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Modular operator
 * @a: Int variable
 * @b: Int variable
 *
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf(stderr, "Error: Division by zero.\n");
		exit(100);
	}
	return (a % b);
}
