#include <stdio.h>
#include <stdlib.h>
/**
 * main - is my main function, it can be used to print
 *	multiply two numbers in argv[]
 * @argc: is the number of arguments + 1
 * @argv: is an array of pointers, each of which points
 *	to an argument and the first to the program name
 *
 * Return: is to return a value to the environment
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
