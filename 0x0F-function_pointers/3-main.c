#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - is a the function to pass the arguments
 *	to the get_op_func
 * @argc: is the number of the command line arguments
 * @argv: is an array of pointers to the arguments
 * Return: is to return 0 when success
 */
int main(int argc, char *argv[])
{
	int (*p)(int, int);
	int i;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 0; argv[2][i] != '\0'; i++)
		;
	p = get_op_func(argv[2]);
	if (p == NULL || i != 1)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", p(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
