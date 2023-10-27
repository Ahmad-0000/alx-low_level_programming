#include <stdio.h>

/**
 * main - is my main function, it can be used to print
 *	the contents of argv[]
 * @argc: is the number of arguments + 1
 * @argv: is an array of pointers, each of which points
 *	to an argument and the first to the program name
 *
 * Return: is to return a value to the environment
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
