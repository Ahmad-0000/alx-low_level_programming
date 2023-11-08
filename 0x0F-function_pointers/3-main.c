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
	int i = 1;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
		i = 0;
	p = get_op_func(argv[2]);
	if (p == NULL || i == 0)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", p(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
