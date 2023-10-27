#include <stdio.h>

/**
 * main - is my main function, it can be used to print
 *	the number of arguments that are passed to the program
 * @argc: is the number of arguments + 1
 * @argv: is an array of pointers, each of which points
 *	to an argument and the first to the program name
 *
 * Return: is to return a value to the environment
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (1);
}
