#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - is a function to add (a) and (b)
 * @a: is an integer
 * @b: is an integer
 * Return: is to return a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - is a function to substract b form a
 * @a: is an integer
 * @b: is an integer
 * Return: is to return a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - is a function to multiply a by b
 * @a: is an integer
 * @b: is an integer
 * Return: is to return a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - is a function to divide a by b
 * @a: is an integer
 * @b: is an interger
 * Return: is to return a / b if b is not equal to 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - is a function to return the reminder of the division
 *	of a by b
 * @a: is an integer
 * @b: is an integer
 * Return: is to return a % b if b is not equal to 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
