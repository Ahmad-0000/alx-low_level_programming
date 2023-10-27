#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - is my main function, it can be used to print
 *	the sum of numbers
 * @argc: is the number of arguments + 1
 * @argv: is an array of pointers, each of which points
 *	to an argument and the first to the program name
 *
 * Return: is to return a value to the environment
 */
int main(int argc, char *argv[])
{
	int i, j, s = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j <= (int)strlen(argv[i]) - 1; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		s += atoi(argv[i]);
	}
	printf("%d\n", s);
	return (0);
}
